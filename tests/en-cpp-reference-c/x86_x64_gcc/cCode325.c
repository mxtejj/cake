/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern void *memcpy(void * __dest, void * __src, unsigned long __n);
extern int putchar(int __c);
extern void *malloc(unsigned long __size);
extern int printf(char * __format, ...);

int main(void)
{
    char source[31];
    char dest[4];
    int * p;
    int arr[3];
    double d;
    signed int long n;

    memcpy2(source, "once upon a midnight dreary...", 31);
    memcpy(dest, source, 4L);
    {
        unsigned long n;

        n = 0;
        for (; n < 4L; ++n)
        {
            putchar(dest[n]);
        }
    }
    p = malloc(12L);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    memcpy(p, arr, 12L);
    d = 0.10000000000000001;
    memcpy(&n, &d, 8L);
    printf("\n%a is %lx as an int64_t\n", d, n);
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

