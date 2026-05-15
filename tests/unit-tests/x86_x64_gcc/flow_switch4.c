/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *calloc(unsigned int n, unsigned int size);

struct X *F(int i)
{
    struct X * p1;

    p1 = 0;
    /*switch*/
    {
        int __a = i;
        if (__a == 1) goto __L1; /*case 1*/
        if (__a == 2) goto __L3; /*case 2*/
        goto __L0;

        {
            struct X * p2;

            __L1: /*case 1*/ 
            p2 = calloc(1, 8L);
            if (p2)
            {
                (void)0;
                p1 = p2;
            }
            goto __L0; /* break */

            __L3: /*case 2*/ 
            goto __L0; /* break */

        }
        __L0:;
    }
    return p1;
}
