/* Cake 0.13.31 x86_x64_gcc */

char *strdup(char *);
void free(void * ptr);

void f(char * s)
{
    char * p;

    p = s ? strdup(s) : 0;
    free((void *)p);
}
