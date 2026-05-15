/* Cake 0.13.31 x86_x64_gcc */

int *get();
void dtor(int * p);

void f(int a)
{
    int * p;

    p = 0;
    p = get();
    dtor(p);
}
