/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * p;
};

void x_destroy(struct X * p);

void f(struct X * x)
{
    x_destroy(x);
}
