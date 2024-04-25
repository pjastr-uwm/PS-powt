#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n, int m, int ** tab1, int ** tab2){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab1[i] = tab2[i];
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
    int **tab1= malloc(4*sizeof(int *));
    tab1[0] = malloc(2*sizeof(int));
    tab1[1] = malloc(2*sizeof(int));
    tab1[2] = malloc(2*sizeof(int));
    tab1[3] = malloc(2*sizeof(int));
    tab1[0][0] =4;
    tab1[0][1] =-3;
    tab1[1][0] =2;
    tab1[1][1] =5;
    tab1[2][0] =1;
    tab1[2][1] =-2;
    tab1[3][0] =7;
    tab1[3][1] =-3;
    printTable(4,2,tab1);
    int **tab2= malloc(4*sizeof(int *));
    tab2[0] = malloc(2*sizeof(int));
    tab2[1] = malloc(2*sizeof(int));
    tab2[2] = malloc(2*sizeof(int));
    tab2[3] = malloc(2*sizeof(int));
    tab2[0][0] =5;
    tab2[0][1] =-3;
    tab2[1][0] =-2;
    tab2[1][1] =-4;
    tab2[2][0] =8;
    tab2[2][1] =2;
    tab2[3][0] =-1;
    tab2[3][1] =6;
    printTable(4,2,tab2);
    copyArr2D(4,2,tab1, tab2);
    printTable(4,2,tab1);
    printTable(4,2,tab2);
    return 0;
}
