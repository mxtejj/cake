/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
};

void f(struct X * p);
void f2(struct X * p);

void delete(struct X * p)
{
    (void)0;
    f(p);
    (void)0;
    f2(p);
}
