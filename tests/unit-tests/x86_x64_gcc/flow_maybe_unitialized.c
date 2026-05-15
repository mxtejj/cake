/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

void *malloc(unsigned long size);
void x_delete(struct X * p);

int main()
{
    struct X * p;

    p = malloc(8L);
    x_delete(p);
}
