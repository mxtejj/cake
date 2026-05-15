/* Cake 0.13.31 x86_x64_gcc */

struct point {
    double x;
    double y;
};

static int _obj[2] = {2,4};
int * p = _obj;

static float _obj2[3] = {1.0,10.0,100.0};
float * pc = _obj2;

void drawline1(struct point from, struct point to);
void drawline2(struct point * from, struct point * to);

int main(void)
{
    int n;
    int * p;
    int __a[2];
    struct point __b;
    struct point __c;
    struct point __d;
    struct point __e;

    n = 2;
    p = &n;
    __a[0] = *p;
    __a[1] = 0;
    p = __a;
    __b.x = 1;
    __b.y = 1;
    __c.x = 3;
    __c.y = 4;
    drawline1(__b, __c);
    __d.x = 1;
    __d.y = 1;
    __e.x = 3;
    __e.y = 4;
    drawline2(&__d, &__e);
}

extern int printf(char * __format, ...);

void drawline1(struct point from, struct point to)
{
    printf("drawline1: `from` @ %p {%.2f, %.2f}, `to` @ %p {%.2f, %.2f}\n", (void *)&from, from.x, from.y, (void *)&to, to.x, to.y);
}

void drawline2(struct point * from, struct point * to)
{
    printf("drawline2: `from` @ %p {%.2f, %.2f}, `to` @ %p {%.2f, %.2f}\n", (void *)from, from->x, from->y, (void *)to, to->x, to->y);
}
