/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * p;
};

struct X f();
void free(void * p);

int main()
{
    struct X x;

    x = 1 ? f() : f();
    free(x.p);
}
