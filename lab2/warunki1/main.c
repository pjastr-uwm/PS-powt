#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a>0){
        printf("Liczba dodatnia\n");
    }
    else if (a==0){
        printf("Liczba zero\n");
    }
    else{
        printf("Liczba ujemna");
    }
    return 0;
}
