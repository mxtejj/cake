/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

struct Y {
    struct X x;
};

void x_destroy(struct X * p);

void y_destroy(struct Y * p)
{
    x_destroy(&p->x);
}
