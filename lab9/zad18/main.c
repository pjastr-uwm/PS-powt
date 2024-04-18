#include <stdio.h>
#include <stdlib.h>

int length(char * txt){
    int i=0;
    while(txt[i] != 0){
        i++;
    }
    return i;
}

char* copyEveryThird(char*txt){
    char * temp = malloc(sizeof(char) * (length(txt)+1));
    int j=0;
    for(int i=0;i<length(txt);i+=3){
        temp[j] = txt[i];
        j++;
    }
    temp[j] =0;
    return temp;
}

int main()
{
    char n1[] ="ABCXYZ";
    printf("%s\n", n1);
    printf("%s\n", copyEveryThird(n1));
    return 0;
}
