#include <stdio.h>
#include <stdlib.h>

float* initFlts(){
    float * wsk = malloc(4*sizeof(float));
    for(int i=0;i<4;i++){
        *(wsk+i) = 0.5+i;
    }
    return wsk+3;
}

int main()
{
    float * wynik = initFlts();
    for(int i=0;i<4;i++){
        printf("%f\n", *(wynik-i));
    }
    return 0;
}
