/* Cake 0.13.31 x86_x64_gcc */

struct __tag1 {
    int * pSelect;
};

union __tag0 {
    struct __tag1 view;
};

struct X {
    union __tag0 u;
};

int main()
{
    struct X t;

    t.u.view.pSelect = 0;
}
