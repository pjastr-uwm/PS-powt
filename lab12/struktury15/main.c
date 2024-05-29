#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Computer{
    char manufacturer[30];
    int usage_hours;
};

struct Computer * initComputer(char manufacturer2[30], int usage_hours2){
    if (strlen(manufacturer2) < 2 || usage_hours2 <=0){
        return NULL;
    }
    struct Computer * wsk = malloc(sizeof(struct Computer));
    strcpy(wsk->manufacturer, manufacturer2);
    wsk->usage_hours = usage_hours2;
    return wsk;
}

void increaseUsage(struct Computer * wsk){
    wsk->usage_hours +=100;
}

int main()
{
    struct Computer * c1 = initComputer("ASUS", -300);
    if (c1!= NULL){
        printf("%s %d\n", c1->manufacturer, c1->usage_hours);
        increaseUsage(c1);
        printf("%s %d\n", c1->manufacturer, c1->usage_hours);
    }
    return 0;
}
