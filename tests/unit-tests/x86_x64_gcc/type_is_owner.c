/* Cake 0.13.31 x86_x64_gcc */

struct Y {
    char * owner_variable;
    char * non_owner_variable;
};

struct X {
    char * owner_variable;
    char * non_owner_variable;
    struct Y y1;
    struct Y y2;
};

void f()
{
    struct X x;
    struct X x2;
    char * p;

    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
}
