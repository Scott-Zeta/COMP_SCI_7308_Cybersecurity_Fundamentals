int main(int argc, char **argv)
{
    // the struct is used to ensure the loc variables are in the same order
    // without struct, compiler can swap these around making expolit impossible
    struct
    {
        char buffer[1024];
        volatile int changeme;
    } locals;

    // flag
    locals.changeme = 0;

    if (argc != 2)
    {
        printf("Uage: %s <input string>\n", argv[0]);
        return 1;
    }

    // copy argument to the buffer
    strcpy(locals.buffer, argv[1]);

    // reveal the secret if "changeme" has been changed
    if (locals.changeme != 0)
    {
        // this makes sure the program runs as SUID user
        setreuid(geteuid(), getegid());
        system("cat /home/q1/secret");
    }
    else
    {
        printf("Try again!\n");
    }
    exit(0);
}