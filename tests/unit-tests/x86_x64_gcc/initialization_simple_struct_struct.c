/* Cake 0.13.31 x86_x64_gcc */

struct Y {
    double d;
};

struct X {
    struct Y y;
    int i;
};

void T3()
{
    struct X x;

    x.y.d = 0;
    x.i = 1;
    (void)0;
    (void)0;
}
