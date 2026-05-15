/* Cake 0.13.31 x86_x64_gcc */

void *calloc(unsigned long n, unsigned long size);
void free(void * ptr);

int main()
{
    int * p;
    int * p2;

    p = calloc(1, 4L);
    p2 = p;
    free(p2);
    free(p);
}
