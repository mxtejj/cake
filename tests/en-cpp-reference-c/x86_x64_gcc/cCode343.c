/* Cake 0.13.31 x86_x64_gcc */

extern unsigned long strspn(char * __s, char * __accept);
extern int printf(char * __format, ...);

int main(void)
{
    char * string;
    char * low_alpha;
    unsigned long spnsz;

    string = "abcde312$#@";
    low_alpha = "qwertyuiopasdfghjklzxcvbnm";
    spnsz = strspn(string, low_alpha);
    printf("After skipping initial lowercase letters from '%s'\nThe remainder is '%s'\n", string, string + spnsz);
}
