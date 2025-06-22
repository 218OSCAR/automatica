import argparse
import torch
import numpy as np
from sam_fine_tune.segment_anything import build_sam_vit_b, SamPredictor
from sam_fine_tune.lora import LoRA_sam
import matplotlib.pyplot as plt
import sam_fine_tune.utils as utils
from PIL import Image
from pathlib import Path
from os.path import split
import cv2



def show_mask(mask, ax, random_color=False):
    if random_color:
        color = np.concatenate([np.random.random(3), np.array([0.6])], axis=0)
    else:
        color = np.array([30/255, 144/255, 255/255, 0.6])
    h, w = mask.shape[-2:]
    mask_image = mask.reshape(h, w, 1) * color.reshape(1, 1, -1)
    ax.imshow(mask_image)

def show_points(coords, labels, ax, marker_size=375):
    pos_points = coords[labels==1]
    neg_points = coords[labels==0]
    ax.scatter(pos_points[:, 0], pos_points[:, 1], color='green', marker='*', s=marker_size, edgecolor='white', linewidth=1.25)
    ax.scatter(neg_points[:, 0], neg_points[:, 1], color='red', marker='*', s=marker_size, edgecolor='white', linewidth=1.25)   

def inference_model(image_path, input_point, baseline=False):
    device = "cuda" if torch.cuda.is_available() else "cpu"
    image = Image.open(image_path)

    w, h = image.size
    box = [0, 0, w, h]

    sam_checkpoint = "../../data/sam_checkpoints/sam_vit_b_01ec64.pth"
    sam = build_sam_vit_b(checkpoint=sam_checkpoint)

    if baseline:
        model = sam
    else:
        rank = 512
        sam_lora = LoRA_sam(sam, rank)
        sam_lora.load_lora_parameters("../../data/sam_checkpoints/lora_rank512.safetensors")
        model = sam_lora.sam

    model.eval()
    model.to(device)
    predictor = SamPredictor(model)
    predictor.set_image(np.array(image))
    # For point input
    #input_point = np.array([[625, 294], [625, 294]])
    input_label = np.array([1,1])
    masks, iou_pred, low_res_iou = predictor.predict(
        point_coords=input_point,
        point_labels=input_label,
        multimask_output=True
    )
    cv2.imwrite("sam_mask.png", masks[0].astype(float)*255)
    print(np.shape(masks[0]))
    for i, (mask, score) in enumerate(zip(masks, iou_pred)):
        plt.figure(figsize=(10,10))
        plt.imshow(image)
        show_mask(mask, plt.gca())
        show_points(input_point, input_label, plt.gca())
        plt.title(f"Mask {i+1}, Score: {score:.3f}", fontsize=18)
        plt.axis('off')
        plt.show()  

    """plt.imsave(save_name, masks[0])
    print("IoU Prediction:", iou_pred[0])"""


#input_file = "./test/1/cables.png"

"""output_file = "sam_mask.png"

output_path, _ = split(output_file)
if output_path:
    Path(output_path).mkdir(parents=True, exist_ok=True)"""




#inference_model(input_file, input_point)


"""
parser = argparse.ArgumentParser(description="SAM-fine-tune Inference")
parser.add_argument("-i", "--image", default="./test/1/cables.png", help="The file to perform inference on.")
parser.add_argument("-o", "--output", default="sam_mask.png", help="File to save the inference to.")
parser.add_argument("-r", "--rank", default=512, help="LoRA model rank.")
parser.add_argument("-l", "--lora", default="../../data/sam_checkpoints/lora_rank512_old.safetensors", help="Location of LoRA Weight file.")
parser.add_argument("-d", "--device", choices=["cuda", "cpu"], default="cuda", help="What device to run the inference on.")
parser.add_argument("-b", "--baseline", action="store_true", help="Use baseline SAM instead of a LoRA model.")
parser.add_argument("-m", "--mask", default=None, help="Location of the mask file to use for inference.")

args = parser.parse_args()"""