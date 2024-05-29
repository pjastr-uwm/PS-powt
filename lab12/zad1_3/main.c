#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListNoHead(struct element * list){
    if(list == NULL){
        printf("Empty list\n---\n");
        return;
    }
    struct element * current = list;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printf("---\n");
}

int main()
{
    struct element * list1 = NULL;
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = 4;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 5;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = -12;
    list2->next->next->next = NULL;
    struct element * current = list2;
    while(current != NULL){
        printf("%d\n", current->x);
        current = current->next;
    }
    printListNoHead(list1);
    printListNoHead(list2);
    return 0;
}
