#include <stdio.h>
#include <stdlib.h>

int calculateSquareRootFloor(int n){
    int i=0;
    while(i*i<=n){
        i++;
    }
    return i-1;
}

int main()
{
    printf("%d\n", calculateSquareRootFloor(1));
    return 0;
}
