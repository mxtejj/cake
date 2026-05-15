/* Cake 0.13.31 x86_x64_gcc */

extern int printf(char * __format, ...);
extern double fmin(double __x, double __y);
float __builtin_inff(void);
float __builtin_nanf(char * str);

int main(void)
{
    printf("fmin(2,1)    = %f\n", fmin(2, 1));
    printf("fmin(-Inf,0) = %f\n", fmin(-(__builtin_inff()), 0));
    printf("fmin(NaN,-1) = %f\n", fmin((__builtin_nanf("")), -1));
}
