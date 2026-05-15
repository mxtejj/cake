/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

static void * memset(void *dest, int ch, unsigned long count);

char *strdup(char * s);

struct X make()
{
    struct X x;

    memset(&x, 0, 8);
    x.name = strdup("text");
    return x;
}

static void * memset(void *ptr, int value, unsigned long count)
{
    unsigned char *p;
    unsigned char v;

    p = (unsigned char *) ptr;
    v = (unsigned char) value;
    while (count--)
    {
        *p++ = v;
    }

    return ptr;
}
