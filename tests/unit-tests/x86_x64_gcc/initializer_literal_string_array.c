/* Cake 0.13.31 x86_x64_gcc */

static void memcpy(void * dest, const void * src, unsigned long n);

void T6()
{
    char s[4];
    char s2[4];

    memcpy(s, "123", 4);
    memcpy(s2, s, 4);
    (void)0;
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

