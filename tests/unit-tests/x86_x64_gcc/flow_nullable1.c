/* Cake 0.13.31 x86_x64_gcc */

int *make1();
void free(void * p);
int *make2();

void f(int condition)
{
    int * p;

    p = 0;
    (void)0;
    if (condition)
    {
        (void)0;
        p = make1();
        (void)0;
        free(p);
        p = make2();
        (void)0;
    }
    else
    {
        (void)0;
    }
    free(p);
}
