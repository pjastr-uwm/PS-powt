#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    //(x%2 == 0) ? printf("parzysta\n") : printf("nieparzysta");
    (x%2 != 0) ? printf("nieparzysta\n") : printf("parzysta");
    return 0;
}
