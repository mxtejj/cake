/* Cake 0.13.31 x86_x64_gcc */

struct item;

struct list {
    struct item * head;
    struct item * tail;
};

struct item {
    int i;
    struct item * next;
    struct item * previous;
};

void list_push(struct list * list, struct item * pnew)
{
    if (list->head == 0)
    {
        list->head = pnew;
        list->tail = pnew;
    }
    else
    {
        ;
        ;
        pnew->previous = list->tail;
        list->tail->next = pnew;
        list->tail = pnew;
    }
}
