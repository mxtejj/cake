/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

struct X *make();
void free(void * p);
char *strdup(char * s);

void f(int condition)
{
    struct X * p;

    p = 0;
    if (condition)
    {
        p = make();
    }
    else
    {
        p = make();
    }
    free(p->text);
    p->text = strdup("c");
    free(p->text);
    free(p);
}
