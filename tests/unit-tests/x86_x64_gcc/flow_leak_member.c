/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *calloc(int n, int size);

void *f1()
{
    struct X * p;

    p = calloc(1, 8L);
    if (p)
    {
        p->name = calloc(1, 2);
    }
    return p;
}
