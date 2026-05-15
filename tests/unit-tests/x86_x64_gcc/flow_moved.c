/* Cake 0.13.31 x86_x64_gcc */

void free(void * p);

void f(int * p)
{
    int * p2;

    p2 = p;
    (void)0;
    if (p)
    {
        (void)0;
    }
    free(p2);
}
