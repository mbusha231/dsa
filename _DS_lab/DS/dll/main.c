#include <stdlib.h>
#include <assert.h>
#include "DLL.h"

void test() {
    List *list = dll_new();
    assert(list->length == 0);
    dll_add_head(list, 20);
    dll_add_head(list, 10);
    assert(list->length == 2);
    assert(list->head->data == 10);
    assert(list->tail->data == 20);
    dll_delete_head(list);
    assert(list->length == 1);
    dll_delete_head(list);
    assert(list->length == 0);
}

int main() {
    test();
    return 0;
}
