/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *malloc(int i);
void free(void * p);

int main()
{
    struct X * p;

    p = malloc(8L);
    free(p);
}
