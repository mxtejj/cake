/* Cake 0.13.31 x86_x64_gcc */

struct X {
    double d;
};

struct __cX1 {
    char i;
};

int main()
{
    struct X x;

    x.d = 1.2;
    (void)0;
}

void f()
{
    struct __cX1 x;

    (void)0;
}
