/* Cake 0.13.31 x86_x64_gcc */

extern void *malloc(unsigned long __size);
extern void *realloc(void * __ptr, unsigned long __size);
extern int printf(char * __format, ...);

int main(void)
{
    int * p;
    int * q;

    p = (int *)malloc(4L);
    q = (int *)realloc(p, 4L);
    *p = 1;
    *q = 2;
    if (p == q)
    {
        printf("%d%d\n", *p, *q);
    }
}
