/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * s;
};

char *strdup(char * s);

void init(struct X * px)
{
    (void)0;
    (void)0;
    px->s = strdup("a");
}

void free(void * p);

int main()
{
    struct X x;

    init(&x);
    free(x.s);
}
