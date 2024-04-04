#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char txt1[], char txt2[]){
    int i=0;
    while(txt1[i] !=0){
        txt2[i] = txt1[i];
        i++;
    }
    txt2[i] =0;
}


int main()
{
    char t1[] = "Olsztyn";
    char t2[20];
    printf("%s,%s\n",t1, t2);
    strCopyNew(t1, t2);
    printf("%s,%s\n",t1, t2);
    return 0;
}
