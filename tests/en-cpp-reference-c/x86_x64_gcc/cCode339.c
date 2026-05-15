/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern char *strncpy(char * __dest, char * __src, unsigned long __n);
extern int printf(char * __format, ...);

int main(void)
{
    char src[3];
    char dest[6];
    char dest2[2];

    memcpy2(src, "hi", 3);
    memcpy2(dest, "abcdef", 6);
    strncpy(dest, src, 5);
    printf("strncpy(dest, src, 5) to a 6-byte dest gives : ");
    {
        unsigned long n;

        n = 0;
        for (; n < 6L; ++n)
        {
            char c;

            c = dest[n];
            c ? printf("'%c' ", c) : printf("'\\0' ");
        }
    }
    printf("\nstrncpy(dest2, src, 2) to a 2-byte dst gives : ");
    strncpy(dest2, src, 2);
    {
        unsigned long n;

        n = 0;
        for (; n < 2L; ++n)
        {
            char c;

            c = dest2[n];
            c ? printf("'%c' ", c) : printf("'\\0' ");
        }
    }
    printf("\n");
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

