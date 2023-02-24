# Exploiting Format String
## Vulnerability in formatistring.c
```
char buff[64];
strncpy(buff, argv[1], sizeof(buff));
```
If the string is longer than 64 bit, it will leak to other memorey location.
use strlcpy() to prevent this, since it ensure to dump the remain after 64.

## How does it looks like?
After compile, ```./formatstring "D %08x"``` will give ```D ffffd1f4```
%08x is the pointer to stack location, ffffd1f4 is the memory location.

if ```./formatstring "DD %08x"``` wil give ````DD ffffd1f3```
which means attacker can access any abitary loacation by edit the String length

## "%08X"?
The "%" character at the beginning of the specifier indicates that a format string is being used.

The "0" character after the "%" character is a flag that specifies that the output should be padded with leading zeros to fill the width of the field. In this case, the width is 8 digits.

The "8" after the "0" specifies the width of the field in characters. In this case, the field is 8 characters wide.

The "x" at the end of the specifier specifies that the output should be in hexadecimal format, using lower-case letters.
when the printf() function encounters the "%08x" format specifier, it prints the value of the next argument as an 8-digit hexadecimal number, with leading zeros if necessary to fill the 8-character field. For example, if the value of the argument is 0x1234, the output would be "00001234".

## Question
With multiple %08x, can see the 414141 as the argument AAAA, what are other? Why they have elements like %,0,8,x?