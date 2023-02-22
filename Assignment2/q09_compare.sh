#!/bin/bash
sudo nmap -Pn -sS -p 1122 192.168.137.128
sudo nmap -Pn -sS -p 2233 192.168.137.128
sudo nmap -Pn -sS -p 3344 192.168.137.128

netcat -v -w 15 192.168.137.128 12345
