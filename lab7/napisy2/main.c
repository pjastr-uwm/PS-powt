#include <stdio.h>
#include <stdlib.h>

int countNums(char str[]){
    int counter=0;
    for(int i=0; str[i] !=0;i++){
        if (str[i] >= '0' && str[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main()
{
    char t1[] = "ashshdghe3234ds";
    printf("%s\n", t1);
    printf("%d\n", countNums(t1));
    return 0;
}
