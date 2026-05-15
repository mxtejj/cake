/* Cake 0.13.31 x86_x64_gcc */

int socket();
void close(int fd);

int main()
{
    int fd;

    fd = socket();
    if (fd < 0)
    {
        (void)0;
        return 1;
    }
    close(fd);
}
