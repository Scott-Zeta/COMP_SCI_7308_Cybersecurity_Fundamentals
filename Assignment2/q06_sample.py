#!/usr/bin/env python3
import sys, socket
socket.setdefaulttimeout(0.1) # set timeout to 100ms
host = "www.adelaide.edu.au"
try:
    ip = socket.gethostbyname(host)
    print(f"{host} resolves to {ip}")
except:
    print("Wrong :-<")
    pass # ignore error