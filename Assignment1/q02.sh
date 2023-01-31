#!/bin/bash
grep -oE '[^[:space:]]+' here.txt | sort | uniq -c | grep ' 14 ' | awk '{print $2}'

# grep -oE '[^[:space:]]+' file_name: extract all the non-whitespace sequences from the file.
# sort: sort the extracted sequences.
# uniq -c: count the occurrence of each unique sequence.
# grep ' 14 ': filter the output to only show the sequences that occur exactly 14 times.
# awk '{print $2}': extract the second column of the output, which is the sequence.