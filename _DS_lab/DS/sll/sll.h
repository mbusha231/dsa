#ifndef SLL_H
#define SLL_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    int length;
    int min;
    int max;
} List;

List* slist_new(void);
List* slist_add(List *list, int data);
int slist_min(List *list);
int slist_max(List *list);
void slist_free(List *list);

#endif
