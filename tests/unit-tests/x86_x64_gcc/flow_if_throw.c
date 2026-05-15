/* Cake 0.13.31 x86_x64_gcc */

int f();

int main()
{
    int i;

    if (1) /*try*/
    {
        if (f())
        {
            i = 1;
            goto __L0; /* throw */
        }
        i = 0;
    }
    else __L0: /*catch*/ 
    {
        (void)0;
    }
    (void)0;
}
