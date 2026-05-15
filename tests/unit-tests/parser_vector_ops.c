typedef float F32;

typedef struct Vec4F32 Vec4F32;
struct [[vector(4, F32)]] Vec4F32 { F32 x, y, z, w; };

typedef struct Vec3F32 Vec3F32;
struct [[cake::vector(3, float)]] Vec3F32 { float x, y, z; };

typedef struct Mat4F32 Mat4F32;
struct [[matrix(4, 4, F32)]] Mat4F32 { F32 e[16]; };

static Vec4F32 vec4_ops(Vec4F32 a, Vec4F32 b)
{
    Vec4F32 r = a + b;
    r = r - a;
    r = r * b;
    r = r / b;
    return r;
}

static Vec3F32 vec3_ops(Vec3F32 a, Vec3F32 b)
{
    Vec3F32 r = a + b;
    r = r - a;
    r = r * b;
    r = r / b;
    return r;
}

int main(void)
{
    Vec4F32 a = { 1, 2, 3, 4 };
    Vec4F32 b = { 4, 3, 2, 1 };
    Vec4F32 c = vec4_ops(a, b);

    Vec3F32 d = { 1, 2, 3 };
    Vec3F32 e = { 3, 2, 1 };
    Vec3F32 f = vec3_ops(d, e);

    Mat4F32 m = { 0 };
    return (int)c.x + (int)f.x + (int)m.e[0];
}
