/* Cake 0.13.31 x86_x64_gcc */

void *malloc(int size);
void free(void * ptr);

int main()
{
    int * p;

    p = malloc(4L);
    if (p != 0)
    {
        free(p);
    }
}
