/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

struct X makex();
void clear(struct X * p);

void f(struct X * pX)
{
    struct X x;

    x = makex();
    clear(&x);
    ;
}
