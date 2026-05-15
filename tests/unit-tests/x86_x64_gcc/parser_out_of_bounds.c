/* Cake 0.13.31 x86_x64_gcc */

static void * memset(void *dest, int ch, unsigned long count);

int main()
{
    int a[5];
    int i;

    memset(&a, 0, 20);
    i = a[5];
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
