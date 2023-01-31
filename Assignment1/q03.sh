#!/bin/bash

find . -type f -exec sha256sum {} + | grep 'a92536e3c31979736460be6e6729147f974411ef193629999b022b96f5682450'

# find . -type f: search for all files in the current directory and its subdirectories.
# -exec sha256sum {} +: execute the sha256sum command on each file found by the find command. The {} placeholder represents each file found, and the + operator allows multiple files to be passed to the sha256sum command at once.
# grep 'hash_value': filter the output of the sha256sum command to only show the lines that contain the specified hash value.