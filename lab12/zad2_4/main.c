#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithHead(struct element * list){
    if(list->next == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * current = list->next;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list1 = malloc(sizeof(struct element));
    list1->next = NULL;
    struct element * list2 = malloc(sizeof(struct element));
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 4;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = 5;
    list2->next->next->next = malloc(sizeof(struct element));
    list2->next->next->next->x = -12;
    list2->next->next->next->next = NULL;
    struct element * current = list2->next;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printListWithHead(list1);
    printListWithHead(list2);
    return 0;
}
