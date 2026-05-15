/* Cake 0.13.31 x86_x64_gcc */

float __builtin_inff(void);
extern void *memcpy(void * __dest, void * __src, unsigned long __n);
extern int printf(char * __format, ...);

int main(void)
{
    double f;
    unsigned int long fn;

    f = (__builtin_inff());
    memcpy(&fn, &f, 8L);
    printf("INFINITY:   %f %lx\n", f, fn);
}
