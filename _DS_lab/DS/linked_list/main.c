#include <assert.h>
#include "linked_list.h"

void test() {
    List *list = slist_new();
    assert(list->length == 0);
    slist_add_tail(list, 10);
    slist_add_tail(list, 10);
    slist_add_tail(list, 20);
    slist_add_tail(list, 20);
    slist_add_tail(list, 30);
    assert(list->length == 5);
    slist_duplicate(list);
    assert(list->length == 3);
    assert(list->head->data == 10);
    assert(list->head->next->data == 20);
    assert(list->tail->data == 30);
    assert(list->tail->next == NULL);
}

int main() {
    test();
    return 0;
}
