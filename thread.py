import random, threading, time
from Queue import Queue
#Producer thread
class Producer(threading.Thread):
    def __init__(self, t_name, queue):
        threading.Thread.__init__(self,name=t_name)
        self.data=queue
    def run(self):
        for i in range(10):
            randomnum=random.randint(1,99)
            print""