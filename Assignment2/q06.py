#!/usr/bin/env python3
import sys, socket
socket.setdefaulttimeout(0.1) # set timeout to 100ms
with open("Assignment2/dnsmap.txt") as f:
    map = f.read().splitlines()
print("Starting")
for n in map:
    host = ".".join([n,"adelaide.edu.au"])
    try:
        ip = socket.gethostbyname(host)
        print(f"{host} resolves to {ip}")
    except:
        pass # ignore error
print("The End")