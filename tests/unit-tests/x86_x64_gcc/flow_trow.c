/* Cake 0.13.31 x86_x64_gcc */

int f(int condition)
{
    int * p;

    p = 0;
    if (1) /*try*/
    {
        int * p2;

        p2 = p;
        (void)0;
        if (condition)
        {
            goto __L0; /* throw */
        }
        p = 0;
    }
    else __L0: /*catch*/ 
    {
    }
    (void)0;
}
