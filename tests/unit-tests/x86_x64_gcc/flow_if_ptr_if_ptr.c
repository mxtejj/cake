/* Cake 0.13.31 x86_x64_gcc */

struct Y;

struct X {
    struct Y * pY;
};

struct Z;

struct Y {
    struct Z * pZ;
};

struct Z {
    int i;
};

void f(struct X * p)
{
    if (p && p->pY && p->pY->pZ)
    {
        p->pY->pZ->i = 1;
    }
}
