/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * text;
};

struct X *make();
void free(void * p);
char *strdup(char * s);

void f(int condition)
{
    struct X * p1;

    p1 = make();
    {
        struct X * p2;
        struct X * p;

        p2 = make();
        p = 0;
        if (condition)
        {
            p = p1;
        }
        else
        {
            p = p2;
        }
        free(p->text);
        p->text = strdup("c");
        free(p->text);
        free(p);
    }
}
