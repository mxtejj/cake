/* Cake 0.13.31 x86_x64_gcc */

struct X;

struct Y {
    struct X * p;
};

struct X {
    int i;
};

static void * memset(void *dest, int ch, unsigned long count);

void *calloc(int i, int sz);
void free(void * p);

int main()
{
    struct Y y;
    struct X * p;

    memset(&y, 0, 8);
    p = calloc(1, 4L);
    if (p)
    {
        y.p = p;
    }
    free(y.p);
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
