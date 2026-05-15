/* Cake 0.13.31 x86_x64_gcc */

static void memcpy(void * dest, const void * src, unsigned long n);

extern char *setlocale(int __category, char * __locale);
extern int swprintf(int * __s, unsigned long __n, int * __format, ...);
extern int wprintf(int * __format, ...);

int main(void)
{
    char narrow_str[5];
    int warr[29];

    memcpy(narrow_str, "z\u00df\u6c34\U0001f34c", 5);
    setlocale(6, "en_US.utf8");
    swprintf(warr, 29L, L"Converted from UTF-8: '%s'", narrow_str);
    wprintf(L"%ls\n", warr);
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

