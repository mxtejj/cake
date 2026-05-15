/* Cake 0.13.31 x86_x64_gcc */

char *f();
int strcmp(char * s1, char * s2);

void g()
{
    char * s1;

    s1 = f();
    if (s1 && strcmp(s1, "a") == 0)
    {
        (void)0;
    }
    else
    {
        (void)0;
    }
}
