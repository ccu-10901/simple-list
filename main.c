#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    List list;
    list_init(&list);

    list_add(&list, 40);
    list_add(&list, 10);
    list_add(&list, 50);
    list_add(&list, 20);
    list_add(&list, 30);

    list_del(&list, 40);
    list_del(&list, 50);

    list_print(&list);
}
