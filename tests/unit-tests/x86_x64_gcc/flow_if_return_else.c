/* Cake 0.13.31 x86_x64_gcc */

void *calloc(int i, int n);
void free(void * p);

int main()
{
    int * p1;
    int * p2;

    p1 = 0;
    p2 = calloc(1, 4L);
    if (p2 == 0)
    {
        return 1;
    }
    else
    {
        p1 = p2;
    }
    (void)0;
    free(p1);
    return 0;
}
