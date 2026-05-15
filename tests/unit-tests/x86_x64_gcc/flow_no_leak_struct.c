/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

static void * memset(void *dest, int ch, unsigned long count);

char *strdup(char * s);
void free(void * p);

void f(int a)
{
    struct X x;

    memset(&x, 0, 8);
    x.text = strdup("a");
    free(x.text);
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
