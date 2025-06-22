# import torch
# print("CUDA available:", torch.cuda.is_available())
# print("CUDA version:", torch.version.cuda)
# print("Device name:", torch.cuda.get_device_name(0) if torch.cuda.is_available() else "No GPU")

import torch
import torchvision

print(torch.__version__)
print(torchvision.__version__)
print(torchvision.ops.nms)  # 不报错即成功
