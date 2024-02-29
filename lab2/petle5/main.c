#include <stdio.h>
#include <stdlib.h>

int main()
{
    int poprzedni = 0;
    int biezacy = 1;
    printf("%d\n", poprzedni);
    int i=1;
    while(i<=9){
        printf("%d\n", biezacy);
        int temp = poprzedni;
        poprzedni = biezacy;
        biezacy = poprzedni +temp;
        i++;
    }
    return 0;
}
