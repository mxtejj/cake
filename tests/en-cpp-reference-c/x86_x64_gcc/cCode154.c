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

extern unsigned long strftime(char * __s, unsigned long __maxsize, char * __format, struct tm * __tp);
extern struct tm *localtime(int long * __timer);
extern int long time(int long * __timer);
extern int printf(char * __format, ...);
extern int vprintf(char * __format, __builtin_va_list __arg);

void tlog(char * fmt, ...)
{
    char msg[50];
    int long __a;
    __builtin_va_list args;

    __a = time(0);
    strftime(msg, 50L, "%T", localtime(&__a));
    printf("[%s] ", msg);
    __builtin_va_start(args, 0);
    vprintf(fmt, args);
    __builtin_va_end(args);
}

int main(void)
{
    tlog("logging %d %d %d...\n", 1, 2, 3);
}
