/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

static void * memset(void *dest, int ch, unsigned long count);

int rand();
struct X f();
void x_destroy(struct X * p);

void g()
{
    {
        struct X x;

        memset(&x, 0, 8);
        if (rand())
        {
            x = f();
        }
        else
        {
            x = f();
        }
        x_destroy(&x);
    }
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
