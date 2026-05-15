/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
};

static void * memset(void *dest, int ch, unsigned long count);

struct X f()
{
    struct X x;

    memset(&x, 0, 4);
    return x;
}
int i = 0;
int * p = 0;

int main()
{
    int a;
    struct X x;
    struct X * px;

    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    memset(&x, 0, 4);
    (void)0;
    px = 0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
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
