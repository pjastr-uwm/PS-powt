#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
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
    int tab1[2][3] = {{4,-3,1},{3,-2,8}};
    int tab2[2][3] = {{2,9}};
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    swapElems(2,3,tab1, tab2);
    printTable(2,3,tab1);
    printTable(2,3,tab2);
    return 0;
}
