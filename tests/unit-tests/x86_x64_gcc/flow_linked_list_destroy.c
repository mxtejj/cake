/* Cake 0.13.31 x86_x64_gcc */

struct item;

struct list {
    struct item * head;
    struct item * tail;
};

struct item {
    struct item * next;
};

static void * memset(void *dest, int ch, unsigned long count);

void item_delete(struct item * p);

void list_destroy(struct list * list)
{
    struct item * p;

    p = list->head;
    while (p)
    {
        struct item * next;

        next = p->next;
        p->next = 0;
        item_delete(p);
        p = next;
    }
}

int main()
{
    struct list list;

    memset(&list, 0, 16);
    list_destroy(&list);
}

static void * memset(void *ptr, int value, unsigned long count)
{
    unsigned char *p;
    unsigned char v;

    p = (unsigned char *) ptr;
    v = (unsigned char) value;
    while (count--)
    {
        *p++ = v;
    }

    return ptr;
}
