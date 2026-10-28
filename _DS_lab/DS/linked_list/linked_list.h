#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED
#include <stddef.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    int length;
} List;

List* slist_new(void);
List* slist_add_tail(List *list, int data);
List* slist_duplicate(List *list);

#endif
