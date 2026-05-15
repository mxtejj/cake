/* Cake 0.13.31 x86_x64_gcc */

extern int printf(char * __format, ...);
extern double atan(double __x);
float __builtin_inff(void);

int main(void)
{
    printf("atan(1) = %f, 4*atan(1)=%f\n", atan(1), 4 * atan(1));
    printf("atan(Inf) = %f, 2*atan(Inf) = %f\n", atan((__builtin_inff())), 2 * atan((__builtin_inff())));
    printf("atan(-0.0) = %+f, atan(+0.0) = %+f\n", atan(-0.0), atan(0));
}
