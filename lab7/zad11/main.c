#include <stdio.h>
#include <stdlib.h>

int isLower(char c){
    if (c>='a' && c<='z')
        return 1;
    return 0;
}

void rmLower(char txt[]){
    int i=0,j=0;
    while(txt[i] !=0){
        if (!isLower(txt[i])){
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j] = 0;
}

int main()
{
    char t1[] = "gsjdh56562GSFS";
    printf("%s\n", t1);
    rmLower(t1);
    printf("%s\n", t1);
    return 0;
}
