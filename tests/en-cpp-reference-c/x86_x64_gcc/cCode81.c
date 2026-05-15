/* Cake 0.13.31 x86_x64_gcc */

static void * memset(void *dest, int ch, unsigned long count);

extern int printf(char * __format, ...);

void f(int a[], int sz)
{
    {
        int i;

        i = 0;
        for (; i < sz; ++i)
        {
            printf("%d\n", a[i]);
        }
    }
}

void g(int (* a)[10])
{
    {
        int i;

        i = 0;
        for (; i < 10; ++i)
        {
            printf("%d\n", (*a)[i]);
        }
    }
}

int main(void)
{
    int a[10];

    memset(&a, 0, 40);
    f(a, 10);
    g(&a);
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
