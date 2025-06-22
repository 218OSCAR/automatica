import socket

import time




def start_cable_routing(order_id, cable_shape):

# This function would contain the logic to start the cable routing process

    input("Press Enter to start cable routing for shape: {}.".format(cable_shape))

    input("Cable routing finished. Press Enter to receive another order.")

    return "Done"










def receive_message_from_jingyun():




    listen_ip = '192.168.50.182' # 192.168.50.42

    listen_port = 8888




    # create a UDP socket to send message to jingyun

    socket_jingyun = socket.socket(socket.AF_INET,
    socket.SOCK_DGRAM)

    socket_jingyun.bind((listen_ip, listen_port))

    

    # try to connect to jingyun

    while True:

        data, addr = socket_jingyun.recvfrom(4096)

        message = data.decode("utf-8")

        print('Received message from Jingyun:', message)

        try:

            order_id, cable_shape = message.strip("[]").replace("'",
            "").split(", ")

            status = start_cable_routing(order_id, cable_shape)

            if status == "Done":

                response_to_Jingyun = [order_id, cable_shape, status]

                socket_jingyun.sendto(str(response_to_Jingyun).encode("utf-8"),
                addr)

        except Exception as e:

            print("Error processing message:", e)

            continue







receive_message_from_jingyun()