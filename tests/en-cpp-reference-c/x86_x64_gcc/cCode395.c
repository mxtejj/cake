/* Cake 0.13.31 x86_x64_gcc */

static void memcpy(void * dest, const void * src, unsigned long n);

extern int printf(char * __format, ...);
extern unsigned long wcslen(int * __s);

int main(void)
{
    int str[51];

    memcpy(str, L"How many wide characters does this string contain?", 51);
    printf("without null character: %zu\n", wcslen(str));
    printf("with null character: %zu\n", 51L);
}

static void memcpy(void * dest, const void * src, unsigned long n)
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

