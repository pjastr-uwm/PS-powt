#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int * numbers, int size){
    int max = *numbers;;
    for(int i=1;i<size;i++){
        if (*(numbers+i) > max){
            max = *(numbers+i);
        }
    }
    printf("%d\n", max);
}

int main()
{
    int* tab = malloc(3*sizeof(int));
    *tab = 3;
    *(tab+1) = -4;
    *(tab+2) = 20;
    findMaxValue(tab,3);
    free(tab);
    return 0;
}
