/* Cake 0.13.31 x86_x64_gcc */

extern unsigned long strcspn(char * __s, char * __reject);
extern unsigned long strlen(char * __s);
extern int printf(char * __format, ...);

int main(void)
{
    char * string;
    char * invalid;
    unsigned long valid_len;

    string = "abcde312$#@";
    invalid = "*$#";
    valid_len = strcspn(string, invalid);
    if (valid_len != strlen(string))
    {
        printf("'%s' contains invalid chars starting at position %zu\n", string, valid_len);
    }
}
