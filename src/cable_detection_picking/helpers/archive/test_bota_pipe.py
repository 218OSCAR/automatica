## example file to test if Pipe works and how it works
# if you want to test it, move this file to ./helpers and execute this in terminal: sudo python3 ./test_bota_pipe.py
from multiprocessing import Process,Queue,Pipe
from bota_ethercat_interface import get_data
import time

if __name__ == '__main__':
    parent_conn,child_conn = Pipe()
    p = Process(target=get_data, args=(child_conn,))
    p.start()
    time_start = time.time()
    while True:
        if (time.time() - time_start >= 3) and (time.time() - time_start <= 3.1):
            print(parent_conn.recv())   # prints "Hello"
