/* Cake 0.13.31 x86_x64_gcc */

extern int printf(char * __format, ...);
static int count = 0;


void f(void)
{
    int i;

    i = 0;
    printf("%d %d\n", i++, count++);
}

int main(void)
{
    {
        int ndx;

        ndx = 0;
        for (; ndx < 10; ++ndx)
        {
            f();
        }
    }
}
