/* Cake 0.13.31 x86_x64_gcc */

struct Y;

struct X {
    char * text;
    int * p1;
    int i;
    struct Y * pY;
};

struct Y {
    char * p0;
    int * p2;
    double i2;
};

void *calloc(unsigned long n, unsigned long size);
void free(void * ptr);

int main()
{
    struct X * x;

    x = calloc(1, 32L);
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    free(x);
}
