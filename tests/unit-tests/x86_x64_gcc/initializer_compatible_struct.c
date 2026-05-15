/* Cake 0.13.31 x86_x64_gcc */

struct Y {
    double d;
};

struct X {
    struct Y y;
    int i;
};

static void memcpy(void * dest, const void * src, unsigned long n);

void T2()
{
    struct Y y;
    struct X x;

    y.d = 3.0;
    memcpy(x, y, 8);
    x.i = 2;
    (void)0;
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

