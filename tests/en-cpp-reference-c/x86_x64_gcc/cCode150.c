/* Cake 0.13.31 x86_x64_gcc */

extern int printf(char * __format, ...);

void func(int x)
{
    printf("func(%d): ", x);
    /*switch*/
    {
        int __a = x;
        if (__a == 1) goto __L1; /*case 1*/
        if (__a == 2) goto __L2; /*case 2*/
        if (__a == 3) goto __L3; /*case 3*/
        if (__a == 4) goto __L4; /*case 4*/
        if (__a == 5) goto __L5; /*case 5*/
        if (__a == 6) goto __L6; /*case 6*/
        goto __L7; /* default */

        {
            __L1: /*case 1*/ 
            printf("case 1, ");
            __L2: /*case 2*/ 
            printf("case 2, ");
            __L3: /*case 3*/ 
            printf("case 3.\n");
            goto __L0; /* break */

            __L4: /*case 4*/ 
            printf("case 4, ");
            __L5: /*case 5*/ 
            __L6: /*case 6*/ 
            printf("case 5 or case 6, ");
            __L7: /* default */ 
            printf("default.\n");
        }
        __L0:;
    }
}

int main(void)
{
    {
        int i;

        i = 1;
        for (; i < 9; ++i)
        {
            func(i);
        }
    }
}
