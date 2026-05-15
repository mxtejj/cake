/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern int puts(char * __s);
extern void *memset(void * __s, int __c, unsigned long __n);

int main(void)
{
    char str[23];

    memcpy2(str, "ghghghghghghghghghghgh", 23);
    puts(str);
    memset(str, 97, 5);
    puts(str);
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

