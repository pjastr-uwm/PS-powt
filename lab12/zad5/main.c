#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printPos(struct element * list){
    struct element * current = list;
    while(current != NULL){
        if (current->x > 0){
            printf("%d\n", current->x);
        }
        current = current->next;
    }
}

int main()
{
    struct element * list1 = NULL;
    struct element * list2 = malloc(sizeof(struct element));
    list2->x = -4;
    list2->next = malloc(sizeof(struct element));
    list2->next->x = 5;
    list2->next->next = malloc(sizeof(struct element));
    list2->next->next->x = -6;
    list2->next->next->next = NULL;
    printPos(list1);
    printPos(list2);
    return 0;
}
