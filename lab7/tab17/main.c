#include <stdio.h>
#include <stdlib.h>

int findElement(int tab[], int n, int val, int (*isEqual)(int, int)){
    for(int i=0;i<n;i++){
        if (isEqual(tab[i], val)){
            return i;
        }
    }
    return -1;
}

int pom(int arg1, int arg2){
    return arg1==arg2;
}

int pom2(int arg1, int arg2){
    return (arg1-arg2)%5 ==0;
}

int main()
{
    printf("%d\n", pom(3,3));
    int tab[] = {3,4,-7,11,23};
    printf("%d\n", findElement(tab, 5, 10, pom));
    printf("%d\n", findElement(tab, 5, 11, pom));
    printf("%d\n", findElement(tab, 5, 16, pom2));
    return 0;
}
