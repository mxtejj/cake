/* Cake 0.13.31 x86_x64_gcc */

void *calloc(int n, unsigned int size);

char *f(int i)
{
    char * p;

    p = calloc(1, 2);
    /*switch*/
    {
        int __a = i;
        if (__a == 1) goto __L1; /*case 1*/
        if (__a == 2) goto __L2; /*case 2*/
        goto __L0;

        {
            __L1: /*case 1*/ 
            goto __L0; /* break */

            __L2: /*case 2*/ 
            goto __L0; /* break */

        }
        __L0:;
    }
    return p;
}
