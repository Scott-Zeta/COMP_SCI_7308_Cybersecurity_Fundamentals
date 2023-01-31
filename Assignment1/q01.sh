#!/bin/bash

grep -A 1 '^And.*it$' /home/student/linux_basics/q01/text

# -A 1: show one line after the matching line
# ^And.*it$: regular expression to match a line that starts with the word "And" and ends with "it".