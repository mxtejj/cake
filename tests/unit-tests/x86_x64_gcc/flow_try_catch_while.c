/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * name;
};

void *malloc(unsigned int size);

struct X *F(int i)
{
    struct X * p1;

    p1 = 0;
    if (1) /*try*/
    {
        if (i == 1)
        {
            p1 = malloc(8L);
            while (0)
            {
            }
        }
        else
        {
            if (i == 3)
            {
                p1 = malloc(8L);
            }
        }
    }
    else __L0: /*catch*/ 
    {
    }
    return p1;
}
