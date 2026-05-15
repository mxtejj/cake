/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

struct Y {
    struct X x;
};

void free(void * ptr);

void f(struct Y * y, struct X * p)
{
    free(y->x.name);
    y->x = *p;
}
