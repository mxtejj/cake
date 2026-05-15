/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void free(void * p);

void x_delete(struct X * p)
{
    if (p)
    {
        free(p);
    }
}
