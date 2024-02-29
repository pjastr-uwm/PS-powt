#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<4;i++){
        printf("%d\n", i);
    }
    printf("---\n");
    printf("%d\n", i);
    int j;
    for(j=0; j<5;j++){
        printf("%d\n", j);
    }
    return 0;
}
