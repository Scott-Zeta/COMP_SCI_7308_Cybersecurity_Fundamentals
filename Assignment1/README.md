## Run?
```
chmod +x script.sh
```
make it excutable, then
```./script.sh``` in terminal

## Q3
SHA-256 (Secure Hash Algorithm 256-bit) is a cryptographic hash function that takes an input (or "message") and returns a fixed-size string of characters, which is a "digest" that is unique to the unique values of the input. The purpose of a hash function is to take an input, and produce an output that is difficult to reverse, or invert, back to the original input.

check a file's sha256
```
sha256sum file_name
```

## Q7
The "cat" command is used to concatenate and display the contents of one or more files, while the "strings" command is used to display only the printable characters in a binary or non-text file. The "strings" command is useful when you want to inspect the content of an executable or binary file and find out if it contains any readable strings or text. "Cat" can display the entire contents of a file, including both text and binary data.

## Q8
It was encode in base64.
how?
1. Turn ACII or UTF-8 into binary bit(8bit each)
2. divide into 6-bit chunks.
3. if last one doesn't have 6bit, fill with 0, convert, then for every "00" add "=" after the base64 letter
So if a code with only alphabet and numeric, end with "=", high probability is base64 