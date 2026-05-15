/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
    void * p;
};

void *malloc(int i, int sz);
void free(void * p);

int main()
{
    struct X * p;

    p = malloc(1, 1);
    (void)0;
    if (p)
    {
        (void)0;
        (void)0;
    }
    free(p);
}
