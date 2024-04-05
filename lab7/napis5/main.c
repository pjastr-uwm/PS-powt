#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[]){
    int i;
    for(i=0;txt1[i] !=0 && txt2[i]!=0;i++){
        if (txt1[i] < txt2[i]){
            return 1;
        }
        if (txt1[i] > txt2[i]){
            return 0;
        }
    }
    if (txt1[i] == 0 && txt2[i] == 0)
        return 0;
    if (txt1[i] == 0)
        return 1;
    return 0;
}

int main()
{
    char t1[] = "ABC";
    char t2[] = "ABD";
    char t3[] = "ABC";
    char t4[] = "RBC";
    char t5[] = "RAC";
    char t6[] = "AB";
    printf("%d\n", lexComp(t1, t2));
    printf("%d\n", lexComp(t1, t3));
    printf("%d\n", lexComp(t2, t1));
    printf("%d\n", lexComp(t4, t1));
    printf("%d\n", lexComp(t5, t1));
    printf("%d\n", lexComp(t6, t1));
    printf("%d\n", lexComp(t1, t6));
    return 0;
}
