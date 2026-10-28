#include <stdlib.h>
#include "linked_list.h"

List* slist_new() {
    List *list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    return list;
}

List* slist_add_tail(List *list, int data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
    list->length++;
    return list;
}

List* slist_duplicate(List *list)
{
    if (list->head == NULL) {
        return list;
    }
    Node *cur = list->head;
    Node *temp;
    while (cur->next != NULL) {
        if (cur->data == cur->next->data) {
            temp = cur->next;
            cur->next = temp->next;
            if (temp == list->tail) {
                list->tail = cur;
            }
            free(temp);
            list->length--;
        } else {
            cur = cur->next;
        }
    }
    return list;
}
