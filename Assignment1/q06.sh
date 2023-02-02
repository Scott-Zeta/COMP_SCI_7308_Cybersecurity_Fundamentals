#!/bin/bash

find . -type f -size 47c -exec cat {} \;

# The find command will search for all files (-type f) with a size of 47 bytes (-size 47c) under the current directory (.). 
# The -exec option allows you to execute a command (cat) on each file found, with {} representing the current file and \; marking the end of the command.