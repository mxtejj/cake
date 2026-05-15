/* Cake 0.13.31 x86_x64_gcc */

void *malloc(unsigned long size);
void free(void * ptr);

void f1()
{
    void * p;

    p = malloc(1);
    if (p)
    {
        (void)0;
    }
    (void)0;
    free(p);
}

void f2(int condition)
{
    void * p;

    p = malloc(1);
    if (condition)
    {
        (void)0;
    }
    (void)0;
    (void)0;
}

void f3(int condition)
{
    void * p;

    p = malloc(1);
    if (condition)
    {
        free(p);
    }
    else
    {
        free(p);
    }
    (void)0;
}

void f4(int condition)
{
    void * p;

    p = malloc(1);
    if (condition)
    {
    }
    else
    {
        free(p);
    }
    (void)0;
    (void)0;
}

void f5(int condition)
{
    void * p;

    p = malloc(1);
    if (condition)
    {
        free(p);
    }
    else
    {
    }
    (void)0;
    (void)0;
}

void f6(int condition)
{
    void * p;

    p = malloc(1);
    if (p)
    {
        free(p);
        return;
    }
    (void)0;
}
