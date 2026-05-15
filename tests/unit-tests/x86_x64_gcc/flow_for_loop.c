/* Cake 0.13.31 x86_x64_gcc */

void *malloc(unsigned long size);
void free(void * ptr);

int main()
{
    void * p;

    p = 0;
    {
        int i;

        i = 0;
        for (; i < 2; i++)
        {
            p = malloc(1);
        }
    }
    free(p);
}
