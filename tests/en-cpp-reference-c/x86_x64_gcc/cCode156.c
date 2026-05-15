/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern int rand(void);
extern int puts(char * __s);
extern int printf(char * __format, ...);

int main(void)
{
    int array[8];
    int n;
    char src[13];
    char dst[13];
    char * p;
    char * q;

    n = 0;
    while (n < 8)
    array[n++] = rand() % 2;
    puts("Array filled!");
    n = 0;
    while (n < 8)
    printf("%d ", array[n++]);
    printf("\n");
    memcpy2(src, "Hello, world", 13);
    p = dst;
    q = src;
    while ((*p++ = *q++))
    ;
    puts(dst);
}

static void memcpy2(void * dest, const void * src, unsigned long n)
{
    char *csrc;
    char *cdest;
    unsigned long i; 

    csrc = (char *)src;
    cdest = (char *)dest;
    for (i = 0; i < n; i++)
    {
       cdest[i] = csrc[i]; 
    }
}

