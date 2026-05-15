/* Cake 0.13.31 x86_x64_gcc */

void *malloc(unsigned long size);
void free(void * ptr);

void f5()
{
    void * p;

    p = malloc(1);
    if (p)
    {
        free(p);
        return;
    }
    (void)0;
}
