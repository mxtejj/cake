/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
    void * p;
};

static void * memset(void *dest, int ch, unsigned long count);

int main()
{
    struct X x;
    struct X __a;

    memset(&__a, 0, 16);
    x = __a;
    (void)0;
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
