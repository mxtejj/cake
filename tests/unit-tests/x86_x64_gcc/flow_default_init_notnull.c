/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * p;
    char * p2;
};

char *strdup(char * s);
void free(void * p);

int main()
{
    char * p0;
    struct X x;

    p0 = strdup("a");
    x.p = p0;
    x.p2 = 0;
    free(x.p);
}
