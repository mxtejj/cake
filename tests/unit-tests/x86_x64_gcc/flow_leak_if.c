/* Cake 0.13.31 x86_x64_gcc */

void *f();
void free(void * p);

int main()
{
    void * p;

    p = f();
    if (p)
    {
        free(p);
        p = f();
    }
}
