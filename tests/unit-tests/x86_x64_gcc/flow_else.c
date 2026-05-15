/* Cake 0.13.31 x86_x64_gcc */

void *malloc(int sz);

void f(int i)
{
    if (i)
    {
    }
    else
    {
        int * p3;

        p3 = malloc(1);
    }
}
