#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char src[], char dest[]){
    int i=0;
    while(src[i] !=0){
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
}

int main()
{
    char n1[] = "Olsztyn";
    char n2[] = "informatyka";
    printf("%s %s\n", n1, n2);
    strCopyNew(n1, n2);
    printf("%s %s\n", n1, n2);
    char n3[20];
    strCopyNew(n1, n3);
    printf("%s %s\n", n1, n3);
    return 0;
}
