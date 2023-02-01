#!/bin/bash

# Generate the l33t password list
while read word; do
  l33t_word=$(echo $word | tr 'aeiou' '4310u')
  echo $l33t_word
done < words.txt > l33t_passwords.txt

# done < words.txt, read words.txt file, start the while loop
# while read word; for read each line of the file, then do something
# $variable_name stands for varible
# "tr" stands for "translate"
# Piped refers to the process of sending the output of one command as the input to another command, which is indicated by the | symbol. 
# The | symbol is called a pipe, and it is used to connect the output of one command to the input of another command, allowing data to flow between them.
# > l33t_passwords.txt, output for the file l33t_passwords.txt