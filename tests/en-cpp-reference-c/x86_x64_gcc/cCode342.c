/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern char *strrchr(char * __s, int __c);
extern int printf(char * __format, ...);

int main(void)
{
    char szSomeFileName[19];
    char * pLastSlash;
    char * pszBaseName;

    memcpy2(szSomeFileName, "foo/bar/foobar.txt", 19);
    pLastSlash = strrchr(szSomeFileName, 47);
    pszBaseName = pLastSlash ? pLastSlash + 1 : szSomeFileName;
    printf("Base Name: %s", pszBaseName);
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

