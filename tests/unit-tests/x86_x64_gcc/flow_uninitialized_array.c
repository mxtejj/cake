/* Cake 0.13.31 x86_x64_gcc */

void f_const(char * s);
void f_non_const(char * s);

int main(void)
{
    char buffer[20];

    f_const(buffer);
    f_non_const(buffer);
}
