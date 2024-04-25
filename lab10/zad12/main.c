#include <stdio.h>
#include <stdlib.h>

void revColArr(int n, int m, int **tab){
    for(int i=0;i<n/2;i++){
        int * wsk = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = wsk;
    }
}

void revColArr2(int n, int m, int **tab){
    for(int j=0;j<m;j++){
        for(int i=0;i<n/2;i++){
            int temp = tab[i][j];
            tab[i][j] = tab[n-1-i][j];
            tab[n-1-i][j] = temp;
        }
    }
}

void printTable(int n, int m, int **tab){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[0][0] = 2;
    tab[0][1] = 3;
    tab[0][2] = 1;
    tab[1][0] = -3;
    tab[1][1] = 4;
    tab[1][2] = 5;
    printTable(2,3, tab);
    revColArr(2,3, tab);
    printTable(2,3, tab);
    revColArr2(2,3,tab);
    printTable(2,3, tab);
    return 0;
}
