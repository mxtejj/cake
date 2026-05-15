/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

void free(void * ptr);

void x_destroy(struct X * p)
{
    free(p->text);
}

void x_delete(struct X * p)
{
    if (p)
    {
        x_destroy(p);
        free(p);
    }
}
