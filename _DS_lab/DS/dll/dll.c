#include <stdlib.h>
#include "DLL.h"

List* dll_new(void)
{
    List *list = (List*)malloc(sizeof(List));

    list->head = NULL;
    list->tail = NULL;
    list->length = 0;

    return list;
}

List* dll_add_head(List *list, int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = list->head;

    if (list->head == NULL)
        list->tail = newNode;
    else
        list->head->prev = newNode;

    list->head = newNode;
    list->length++;

    return list;
}

List* dll_delete_head(List *list)
{
    if (list->head == NULL)
        return list;

    Node *temp = list->head;
    list->head = list->head->next;

    if (list->head == NULL)
        list->tail = NULL;
    else
        list->head->prev = NULL;

    free(temp);
    list->length--;

    return list;
}