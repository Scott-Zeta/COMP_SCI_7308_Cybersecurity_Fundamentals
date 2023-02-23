#!/bin/bash
sudo nmap -Pn -sS -r -n -p 1122,2233,3344 192.168.137.128
netcat -v -w 15 192.168.137.128 12345

# -r will follow the sequence of the port, or it would send package randomly