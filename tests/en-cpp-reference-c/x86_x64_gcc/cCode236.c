/* Cake 0.13.31 x86_x64_gcc */

extern int printf(char * __format, ...);
extern double fmax(double __x, double __y);
float __builtin_inff(void);
float __builtin_nanf(char * str);

int main(void)
{
    printf("fmax(2,1)    = %f\n", fmax(2, 1));
    printf("fmax(-Inf,0) = %f\n", fmax(-(__builtin_inff()), 0));
    printf("fmax(NaN,-1) = %f\n", fmax((__builtin_nanf("")), -1));
}
