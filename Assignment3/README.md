# Notes
1. Write the over flow in hex and in four bytes little-endian order such as Integer ```1``` as ```\x01\x00\x00\x00``` each section for one byte
2. Since Python2 and python3 use different method to encode and decode the string and bytes. Need to use
```
import sys
sys.stdout.buffer.write()
```
for write into the memory