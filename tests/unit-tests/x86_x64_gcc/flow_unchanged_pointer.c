/* Cake 0.13.31 x86_x64_gcc */

struct Y;

struct X {
    struct Y * pY;
};

struct Y {
    int i;
};

void *calloc(int n, unsigned long size);
void f(struct Y * p);
void free(void * ptr);

int main()
{
    struct X * p;

    p = calloc(1, 8L);
    if (p)
    {
        p->pY = calloc(1, 4L);
        if (p->pY)
        {
            f(p->pY);
            p->pY->i = 1;
        }
        free(p->pY);
        free(p);
    }
}
