/* Cake 0.13.31 x86_x64_gcc */

struct X {
    char * owner_variable;
};
struct X global;

char *f()
{
    return global.owner_variable;
}
