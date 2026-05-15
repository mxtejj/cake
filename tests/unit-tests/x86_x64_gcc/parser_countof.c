/* Cake 0.13.31 x86_x64_gcc */

static void test_vm_pointer(int n);
static void check(char * name, int ok);
extern int printf(char * __format, ...);
static int failures = 0;

static void test_vm_parameter(void);
static void check_param_countof(int arr[]);

int main(void)
{
    test_vm_pointer(8);
    test_vm_parameter();
    if (failures == 0)
    {
        printf("\nAll tests passed.\n");
    }
    else
    {
        printf("\n%d test(s) FAILED.\n", failures);
    }
    return failures != 0;
}

static void check(char * name, int ok)
{
    if (ok)
    {
        printf("PASS  %s\n", name);
    }
    else
    {
        printf("FAIL  %s\n", name);
        failures++;
    }
}

static void test_vm_pointer(int n)
{
    unsigned long __vm0;
    int (* p)[];

    __vm0 = n;
    p = 0;
    check("VM pointer-to-array countof", __vm0 == (unsigned long)n);
}

static void check_param_countof(int arr[])
{
    check("VM param inner dim", 1);
}

static void test_vm_parameter(void)
{
    int data[6][4];

    check_param_countof(data);
}
