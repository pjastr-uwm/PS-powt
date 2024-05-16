#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person{
    char name[20];
    int age;
};

struct Person * initPerson(char name2[20], int age2){
    struct Person * wsk = malloc(sizeof(struct Person));
    wsk->age = age2;
    strcpy(wsk->name, name2);
    return wsk;
};

void showPerson(struct Person arg){
    printf("%s %d\n", arg.name, arg.age);
}

void birthday(struct Person * wsk){
    wsk->age ++;
}

int main()
{
    struct Person * p1 = initPerson("Jan", 22);
    showPerson(*p1);
    birthday(p1);
    showPerson(*p1);
    return 0;
}
