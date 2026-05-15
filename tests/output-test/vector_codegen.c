struct [[vector(4, float)]] Vec4F32 { float x, y, z, w; };

static struct Vec4F32 add4(struct Vec4F32 a, struct Vec4F32 b)
{
    struct Vec4F32 c = { a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };
    return c;
}

int main(void)
{
    struct Vec4F32 a = { 1, 2, 3, 4 };
    struct Vec4F32 b = { 4, 3, 2, 1 };
    struct Vec4F32 c = add4(a, b);
    return (int)c.x;
}
