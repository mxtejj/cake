/* Cake 0.13.31 x86_x64_gcc */

struct Y;

struct X {
    char * text;
    int * p1;
    int i;
    struct Y * pY;
};

struct Y {
    char * p0;
    int * p2;
    double i2;
};

static void * memset(void *dest, int ch, unsigned long count);

void f(struct X * p);
void destroy(struct X * p);

int main()
{
    struct X x;

    memset(&x, 0, 32);
    f(&x);
    (void)0;
    (void)0;
    (void)0;
    destroy(&x);
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
