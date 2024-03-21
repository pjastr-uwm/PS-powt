#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int pom(int arg){
    return arg+5;
}

int main()
{
    printf("%d\n", calculate(pom,8));
    return 0;
}
