#ifndef STRUCT_DEMO_LIST_H
#define STRUCT_DEMO_LIST_H

#define LIST_ERR_MALLOC -1

typedef struct node Node;
struct node {
    int data;
    Node *next;
};

typedef struct list {
    Node *head;
} List;

int list_init(List *list);

/**
 * @return 0 if success, otherwise negative num
 */
int list_add(List *list, int data);

int list_del(List *list, int target);

void list_print(List *list);

#endif //STRUCT_DEMO_LIST_H
