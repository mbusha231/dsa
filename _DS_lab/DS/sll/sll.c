#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

List* slist_new() {
    List *list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    list->min = INT_MAX;
    list->max = INT_MIN;
    return list;
}

List* slist_add(List *list, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
        list->min = data;
        list->max = data;
    } else {
        list->tail->next = node;
        list->tail = node;
        if (data < list->min)
            list->min = data;
        if (data > list->max)
            list->max = data;
    }
    list->length++;
    return list;
}

int slist_min(List *list)
{
    Node *cur = list->head;
    int min = cur->data;

    while (cur != NULL)
    {
        if (cur->data < min)
            min = cur->data;

        cur = cur->next;
    }

    return min;
}

int slist_max(List *list)
{
    Node *cur = list->head;
    int max = cur->data;

    while (cur != NULL)
    {
        if (cur->data > max)
            max = cur->data;

        cur = cur->next;
    }

    return max;
}

void slist_free(List *list) {
    Node *cur = list->head;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    free(list);
}
