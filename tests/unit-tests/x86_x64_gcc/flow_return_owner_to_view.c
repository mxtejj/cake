/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * owner_variable;
};

char *f(struct X * parameter)
{
    return parameter->owner_variable;
}
