/* Cake 0.13.31 x86_x64_gcc */

struct Y;

struct X {
    struct Y * current;
};

struct Y {
    int type;
};

void f(struct X * ctx)
{
    if (ctx->current == 0)
    {
        return;
    }
    if (ctx->current != 0)
    {
    }
    else
    {
        ctx->current->type = 1;
    }
}
