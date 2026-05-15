/* Cake 0.13.31 x86_x64_gcc */

struct timespec {
    int long tv_sec;
    int long tv_nsec;
};

extern int printf(char * __format, ...);
extern char *ctime(int long * __timer);
extern int long time(int long * __timer);
extern int thrd_sleep(struct timespec * __time_point, struct timespec * __remaining);

int main(void)
{
    int long __a;
    struct timespec __b;
    int long __c;

    __a = time(0);
    printf("Time: %s", ctime(&__a));
    __b.tv_sec = 1;
    __b.tv_nsec = 0;
    thrd_sleep(&__b, 0);
    __c = time(0);
    printf("Time: %s", ctime(&__c));
}
