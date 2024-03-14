#include <stdio.h>
#include <stdlib.h>

float calculateAbsoluteValue(float arg){
    if (arg>=0)
        return arg;
    return -arg;
}

int main()
{
    printf("%f\n", calculateAbsoluteValue(-3));
    return 0;
}
