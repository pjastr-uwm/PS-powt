#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element * list){
    struct element * current = list->next;
    while(current != NULL){
        if (current->x %2 != 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
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
    list2->next->next->next->x = -3;
    list2->next->next->next->next = NULL;
    printOdd(list1);
    printOdd(list2);
    return 0;
}
