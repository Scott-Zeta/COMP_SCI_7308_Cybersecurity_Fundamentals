#!/bin/bash

while read pass; do
  echo "Trying: $pass"
  if gpg -d --batch --passphrase "$pass" secret.txt.gpg > secret.txt 2>/dev/null
  then
    echo "found:$pass"
    cat secret.txt
    exit 0
  fi
done < l33t_passwords.txt

# fi for end of a if statement
# 2>/dev/null for error message to the bin, so they don't display(not essential)
# (2 for error message in unix, 1 for output, 0 for input, like write())
# exit 0, exit the script, break the loop. Or it will keep trying even found correct password
