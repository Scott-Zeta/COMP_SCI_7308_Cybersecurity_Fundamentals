#!/bin/bash

hashcat -a 0 -m 500 /home/scott-zeta/Public/COMP_SCI_7308_Cybersecurity_Fundamentals/Assignment1/q13_shadow_copy /home/scott-zeta/Public/rockyou.txt --show > password.txt
