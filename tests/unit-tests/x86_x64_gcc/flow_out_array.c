/* Cake 0.13.31 x86_x64_gcc */

void f(char s[2])
{
}

void test1()
{
    char s[2];

    f(s);
}

void f2(char * s)
{
    *s = 0;
}

void test2()
{
    char s[2];

    f2(s);
}

int main()
{
}
