/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

struct Y {
    struct X x;
};

struct Y f();

int main()
{
    struct Y y;

    y = f();
}
