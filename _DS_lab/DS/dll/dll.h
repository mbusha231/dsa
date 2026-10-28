#ifndef DLL_H
#define DLL_H

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    int length;
} List;

List* dll_new(void);
List* dll_add_head(List *list, int data);
List* dll_delete_head(List *list);

#endif
