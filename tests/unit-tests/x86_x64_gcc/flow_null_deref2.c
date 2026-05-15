/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
};

void f(struct X * p)
{
    int i;
    int i3;
    int i2;

    i = p ? p->i : 0;
    i3 = p->i;
    i2 = p ? 0 : p->i;
}
