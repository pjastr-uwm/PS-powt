#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char * brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car c1;
    c1.brand = "Skoda";
    strcpy(c1.model, "Fabia");
    c1.year = 2020;
    c1.isAvailable =0;
    printf("%s %s %d %d\n", c1.brand, c1.model, c1.year, c1.isAvailable);
    struct Car c2 = {"Skoda", "Fabia", 2017, 1};
    printf("%s %s %d %d\n", c2.brand, c2.model, c2.year, c2.isAvailable);
    return 0;
}
