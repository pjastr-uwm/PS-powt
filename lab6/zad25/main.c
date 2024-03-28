#include <stdio.h>
#include <stdlib.h>

int count_positive_elements(int n, int tab[]){
    int counter =0;
    for(int i=0;i<n;i++){
        if (tab[i] >0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int tab[] = {3,-4,5};
    printf("%d\n", count_positive_elements(3, tab));
    return 0;
}
