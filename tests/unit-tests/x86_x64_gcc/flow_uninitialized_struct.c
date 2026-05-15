/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

void x_destroy(struct X * p);

int main()
{
    struct X x;

    x_destroy(&x);
}
