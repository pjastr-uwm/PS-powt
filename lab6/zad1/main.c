#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int max = numbers[0];
    for(int i=1;i<size;i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("%d\n", max);
}

int main()
{
    int tab[] = {3,-4,20};
    findMaxValue(tab,3);
    return 0;
}
