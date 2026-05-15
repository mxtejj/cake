/* Cake 0.13.31 x86_x64_gcc */

char *strdup(char * s);
void exit(int exit_code);
void free(void * p);

void f()
{
    char * s;

    s = strdup("a");
    if (s == 0)
    {
        exit(1);
    }
    (void)0;
    free(s);
}
