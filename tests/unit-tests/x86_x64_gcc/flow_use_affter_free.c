/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

static void * memset(void *dest, int ch, unsigned long count);

void free(void * ptr);

void x_destroy(struct X * p)
{
    free(p->name);
}

void x_print(struct X * p)
{
}

char *strdup(char * s);

int main()
{
    struct X x;

    memset(&x, 0, 8);
    x.name = strdup("a");
    x_destroy(&x);
    x_print(&x);
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
