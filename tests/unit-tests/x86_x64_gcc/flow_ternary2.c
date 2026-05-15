/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

static void * memset(void *dest, int ch, unsigned long count);

void f(int condition)
{
    struct X x1;
    struct X x2;
    struct X * p;

    memset(&x1, 0, 8);
    memset(&x2, 0, 8);
    p = condition ? &x1 : &x2;
    (void)0;
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
