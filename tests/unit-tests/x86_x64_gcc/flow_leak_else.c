/* Cake 0.13.31 x86_x64_gcc */

void *malloc(int size);
void free(void * ptr);

void f(int c)
{
    int * p;

    p = malloc(4L);
    if (c)
    {
        free(p);
    }
}
