/* Cake 0.13.31 x86_x64_gcc */

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    int long tm_gmtoff;
    char * tm_zone;
};

extern struct tm *localtime(int long * __timer);
extern int long time(int long * __timer);
extern int printf(char * __format, ...);
extern char *asctime(struct tm * __tp);

int main(void)
{
    struct tm tm;
    int long __a;

    __a = time(0);
    tm = *localtime(&__a);
    printf("%s", asctime(&tm));
}
