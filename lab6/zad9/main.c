#include <stdio.h>
#include <stdlib.h>

int maxIdx(int n, int* tab){
    int index =0;
    for(int i=0;i<n;i++){
        if (*(tab+i) > *(tab+index)){
            index = i;
        }
    }
    return index;
}

int main()
{
    int * tab = malloc(4*sizeof(int));
    *tab     = 11;
    *(tab+1) = -2;
    *(tab+2) = 11;
    *(tab+3) = 7;
    printf("%d\n", maxIdx(4, tab));
    free(tab);
    return 0;
}
