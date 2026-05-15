/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * p;
};

char *strdup(char * s);

int main()
{
    struct X x;

    x.p = strdup("a");
}
