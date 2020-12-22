#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int list_init(List *list) {
    list->head = NULL;
    return 0;
}

int list_add(List *list, int data) {
    /* allocate a new node */
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        return LIST_ERR_MALLOC;
    }
    new_node->data = data;
    new_node->next = NULL;

    /* if list is empty */
    if (list->head == NULL) {
        list->head = new_node;
        return 0;
    }

    /* otherwise, find the insertion point */
    Node *n = list->head;
    while (n->next) {
        n = n->next;
    }

    n->next = new_node;

    return 0;
}

int list_del(List *list, int target) {
    Node **curr = &list->head;
    Node *n;
    while ((n = *curr)) {
        if (n->data == target) {
            Node *next = n->next;
            *curr = next;
            free(n);
            return 0;
        }
        curr = &n->next;
    }

    return -1;
}

void list_print(List *list) {
    /* if list is empty */
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    int i = 0;
    Node *n = list->head;
    while (n) {
        printf("[%d]: %d\n", i++, n->data);
        n = n->next;
    }
}
