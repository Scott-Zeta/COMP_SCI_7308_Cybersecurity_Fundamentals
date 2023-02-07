#!/usr/bin/python3
import argparse
import os
import sys
import random
def mycrypto (filename):
    with open(filename, 'r') as f, open(filename + '.enc', 'w') as o:
        blob = f.read() 
        for b in blob:   
            key = random.randrange(255)
            x = ord(b) ^ key
            o.write(chr(x))   

def main():
    parser = argparse.ArgumentParser(description='Encrypt (?) a file')
    parser.add_argument('filename', metavar='filename', type=str, help='file to encrypt')
    parser.add_argument('--seed', metavar='seed',type=int,default=2021,help='seed')
    args = parser.parse_args()

    if not os.path.isfile(args.filename):
        print('The file  does not exist')
        sys.exit()

    random.seed(args.seed)
    mycrypto(args.filename)

if __name__== "__main__":
    main()