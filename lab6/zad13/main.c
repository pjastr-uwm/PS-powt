#include <stdio.h>
#include <stdlib.h>

int * shiftLeft(int n, int tab[]){
    int * temp = malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        *(temp +i) = tab[i+1];
    }
    *(temp+n-1) = tab[0];
    return temp;
}

void printTable(int n, int*tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int tab[] = {4,-5,7,9};
    printTable(4, tab);
    int * results = shiftLeft(4, tab);
    printTable(4, results);
    free(results);
    return 0;
}
