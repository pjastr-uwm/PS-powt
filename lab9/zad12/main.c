#include <stdio.h>
#include <stdlib.h>

int isDigitNew(char znak){
    if ('0' <= znak && znak <= '9'){
        return 1;
    }
    return 0;
}

int isDigitNew2(char znak){
    char cyfry[] = "0123456789";
    for(int i=0;cyfry[i] !=0;i++){
        if (znak == cyfry[i])
            return 1;
    }
    return 0;
}

void rmDigits(char napis[]){
    int i=0,j=0;
    while(napis[i] !=0){
        if (!isDigitNew(napis[i])){
            napis[j]=napis[i];
            j++;
        }
        i++;
    }
    napis[j] = 0;

}

void rmDigits2(char napis[]){
    int i=0,j=0;
    while(napis[i] !=0){
        char cyfry[] = "0123456789";
        int czyCyfra =0;
        for(int k=0; cyfry[k] !=0;k++){
            if (napis[i] == cyfry[k]){
                czyCyfra =1;
                break;
            }
        }
        if (!czyCyfra){
            napis[j]=napis[i];
            j++;
        }
        i++;
    }
    napis[j] = 0;

}

int main()
{
    char n1[] = "A5C7E";
    printf("%s\n", n1);
    rmDigits(n1);
    printf("%s\n", n1);
    char n2[] = "A5C7E";
    printf("%s\n", n2);
    rmDigits2(n2);
    printf("%s\n", n2);
    return 0;
}
