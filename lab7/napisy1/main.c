#include <stdio.h>
#include <stdlib.h>

int length(char* str){
    int counter =0;
    for(int i=0;str[i] != '\0';i++){
        counter++;
    }
    return counter;
}

int length2(char* str){
    int counter =0;
    int i=0;
    while( str[i]!='\0'){
        counter++;
        i++;
    }
    return counter;
}

int length3(char* str){
    int counter =0;
    int i=0;
    while( *(str+i)!='\0'){
        counter++;
        i++;
    }
    return counter;
}

int length4(char* str){
    int counter =0;
    int i=0;
    while( *(str+i)!=0){
        counter++;
        i++;
    }
    return counter;
}

int length5(char* str){
    int counter =0;
    int i=0;
    while( *(str+i++)!=0){
        counter++;
    }
    return counter;
}

int length6(char* str){
    int counter =0;
    int i=0;
    while( *(str+i++)){
        counter++;
    }
    return counter;
}

int lengthRec(char *str){
    if (str[0] == '\0')
        return 0;
    return 1+lengthRec(str+1);
}

int lengthRec2(char *str){
    if (*str == 0)
        return 0;
    return 1+lengthRec(str+1);
}


int main()
{
    char t1[] = "Olsztyn";
    printf("%d\n", length(t1));
    printf("%d\n", length2(t1));
    printf("%d\n", length3(t1));
    printf("%d\n", length4(t1));
    printf("%d\n", length5(t1));
    printf("%d\n", length6(t1));
    printf("%d\n", lengthRec(t1));
    printf("%d\n", lengthRec2(t1));
    return 0;
}
