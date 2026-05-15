/* Cake 0.13.31 x86_x64_gcc */

struct X {
    int i;
};

void fill_options(struct X * options)
{
    {
        int i;

        i = 1;
        for (; i < 2; i++)
        {
            options->i = 1;
            return;
        }
    }
}
