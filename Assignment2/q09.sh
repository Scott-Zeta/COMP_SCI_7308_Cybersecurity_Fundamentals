#!/bin/bash
# sudo nmap -Pn -sS -r -n -p 1122,2233,3344 192.168.137.128
# netcat -v -w 15 192.168.137.128 12345

# -r will follow the sequence of the port, or it would send package randomly

while read pass; do
    echo "Try knocking: $pass"
    sudo nmap -Pn -sS -r -n -p ${pass} 192.168.137.128
    netcat -v -w 3 192.168.137.128 12345
done < ./Assignment2/sequence.txt

# read all permutation as knocking sequence. 
# 3 seconds wait for netcat time out.