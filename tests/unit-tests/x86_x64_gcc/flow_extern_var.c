/* Cake 0.13.31 x86_x64_gcc */
int g = 1;

void f1()
{
    (void)0;
    g = 1;
    (void)0;
    g = 0;
    (void)0;
}

void f2()
{
    (void)0;
    g = 2;
    g = 3;
}
