#!/bin/bash

dd if=q11_cracker.bmp count=67 ibs=1 > q11_out.bmp
dd if=q11_2000x2000_256-color.bmp.encrypted skip=67 ibs=1 >> q11_out.bmp