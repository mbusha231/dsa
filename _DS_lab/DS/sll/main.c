#include <assert.h>
#include <stdlib.h>
#include "linked_list.h"

void test()
{
    List *list = slist_new();

    assert(list->length == 0);

    slist_add(list, 20);
    slist_add(list, 10);
    slist_add(list, 40);
    slist_add(list, 5);

    assert(list->length == 4);
    assert(slist_min(list) == 5);
    assert(slist_max(list) == 40);

    slist_add(list, 2);
    assert(slist_min(list) == 2);

    slist_add(list, 50);
    assert(slist_max(list) == 50);

    while (list->head != NULL) {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
    }

    free(list);
}

int main()
{
    test();
    return 0;
}

