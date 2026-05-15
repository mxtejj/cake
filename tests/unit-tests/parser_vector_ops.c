struct [[vector(4, float)]] Vec4F32 { float x, y, z, w; };
struct [[vector(3, float)]] Vec3F32 { float x, y, z; };
struct [[matrix(4, 4, float)]] Mat4F32 { float e[16]; };

int main(void)
{
    struct Vec4F32 a = { 1, 2, 3, 4 };
    struct Vec4F32 b = { 4, 3, 2, 1 };
    struct Vec4F32 c = { a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };

    struct Vec3F32 d = { 1, 2, 3 };
    struct Vec3F32 e = { 3, 2, 1 };
    struct Vec3F32 f = { d.x + e.x, d.y + e.y, d.z + e.z };

    struct Mat4F32 m = { 0 };
    return (int)c.x + (int)f.x + (int)m.e[0];
}
