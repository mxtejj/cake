/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern int printf(char * __format, ...);
extern unsigned long strlen(char * __s);

int main(void)
{
    char str[46];

    memcpy2(str, "How many characters does this string contain?", 46);
    printf("without null character: %zu\n", strlen(str));
    printf("with null character:    %zu\n", 46L);
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

