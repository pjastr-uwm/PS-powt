#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(int i=start;i<=end;i++){
        printf("%d\n", func(i));
    }
}

int square(int arg){
    return arg*arg;
}

int cube(int arg){
    return arg*arg*arg;
}

int main()
{
    applyFunction(square, 3,6);
    printf("--\n");
    applyFunction(cube, 3,6);
    return 0;
}
