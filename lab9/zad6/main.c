#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0; txt[i] !=0;i++){
        if (65 <= txt[i] && txt[i]<=90){
            txt[i] += 32;
        }
    }
}

void toLowerNew2(char txt[]){
    for(int i=0; txt[i] !=0;i++){
        if ('A' <= txt[i] && txt[i]<='Z'){
            txt[i] += ('a' - 'A');
        }
    }
}

int main()
{
    char n1[] = "ABCxyz";
    printf("%s\n", n1);
    toLowerNew(n1);
    printf("%s\n", n1);
    char n2[] = "ABCxyz";
    printf("%s\n", n2);
    toLowerNew2(n2);
    printf("%s\n", n2);
    return 0;
}
