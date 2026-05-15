/* Cake 0.13.31 x86_x64_gcc */

static void memcpy2(void * dest, const void * src, unsigned long n);

extern void *memchr(void * __s, int __c, unsigned long __n);
extern unsigned long strlen(char * __s);
extern int printf(char * __format, ...);

int main(void)
{
    char str[8];
    int chars[2];

    memcpy2(str, "ABCDEFG", 8);
    chars[0] = 68;
    chars[1] = 100;
    {
        unsigned long i;

        i = 0;
        for (; i < 2L; ++i)
        {
            int c;
            char * ps;

            c = chars[i];
            ps = memchr(str, c, strlen(str));
            ps ? printf("character '%c'(%i) found: %s\n", c, c, ps) : printf("character '%c'(%i) not found\n", c, c);
        }
    }
    return 0;
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

