/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *calloc(unsigned int n, unsigned int size);

struct X *F(int i)
{
    struct X * p1;
    struct X * p2;

    p1 = 0;
    p2 = calloc(1, 8L);
    if (p2)
    {
        p1 = p2;
    }
    return p1;
}
