#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    return x + y;
}

int sumVals(int* wsk1, int* wsk2){
    return *wsk1 + *wsk2;
}

void addPtr(int* wsk1, int* wsk2, int* wsk3){
    *wsk3 = *wsk1 + *wsk2;
}

int main()
{
    int a = 5, b =7;
    printf("%d\n", sum(a,b));
    printf("%d\n", sumVals(&a,&b));
    int c = 3;
    addPtr(&a, &b, &c);
    printf("%d\n",c);
    return 0;
}
