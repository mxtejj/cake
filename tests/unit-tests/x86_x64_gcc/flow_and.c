/* Cake 0.13.31 x86_x64_gcc */

int *f();

int main()
{
    int * p1;
    int * p2;

    p1 = f();
    p2 = f();
    if (p1 && p2)
    {
        (void)0;
        (void)0;
    }
    else
    {
    }
}
