typedef float F32;

typedef struct Vec4F32 Vec4F32;
struct [[cake::vector(4, F32)]] Vec4F32 { F32 x, y, z, w; };

static Vec4F32 add4(Vec4F32 a, Vec4F32 b)
{
    return a + b;
}

int main(void)
{
    Vec4F32 a = { 1, 2, 3, 4 };
    Vec4F32 b = { 4, 3, 2, 1 };
    Vec4F32 c = add4(a, b);
    return (int)c.x;
}
