/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *malloc(unsigned long size);

int main()
{
    struct X * p;

    p = (struct X *)malloc(1);
}
