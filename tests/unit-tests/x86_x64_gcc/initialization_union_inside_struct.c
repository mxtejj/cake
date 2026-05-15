/* Cake 0.13.31 x86_x64_gcc */

union U {
    int b;
    double c;
};

struct X {
    double a;
    union U u;
    int d;
};

int main()
{
    struct X x;

    x.a = 1;
    x.u.b = 2;
    x.d = 3;
}
