/* Cake 0.13.31 x86_x64_gcc */

void *malloc(int sz);
void free(void * p);

void f(int i)
{
    void * p;

    p = 0;
    if (i)
    {
        if (i)
        {
            p = malloc(1);
        }
        else
        {
            p = malloc(1);
        }
    }
    free(p);
}
