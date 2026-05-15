/* Cake 0.13.31 x86_x64_gcc */

static void memcpy(void * dest, const void * src, unsigned long n);

int main()
{
    char s3[4];

    memcpy(s3, s2, 4);
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

