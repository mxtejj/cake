/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *malloc(int i);

int main()
{
    struct X * p;

    p = malloc(8L);
    p = 0;
}
