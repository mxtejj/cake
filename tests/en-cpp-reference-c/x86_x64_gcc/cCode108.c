/* Cake 0.13.31 x86_x64_gcc */

extern int rand(void);
extern int printf(char * __format, ...);
extern int putchar(int __c);

int main(void)
{
    int array[8];

    {
        unsigned long i;

        i = 0;
        for (; i < 8; ++i)
        {
            array[i] = rand() % 2;
        }
    }
    printf("Array filled!\n");
    {
        unsigned long i;

        i = 0;
        for (; i < 8; ++i)
        {
            printf("%d ", array[i]);
        }
    }
    putchar(10);
}
