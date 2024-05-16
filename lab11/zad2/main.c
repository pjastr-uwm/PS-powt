#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *firstName;
    char *lastName;
    int id;
    double gpa;
}Student;

int main()
{
    Student s1 = {"Jan","Kowalski", 1, 3.6};
    Student s2 = {"Anna","Kowalska", 2, 4.1};
    Student s3 = {"Krzysztof","Nowak", 3, 4.9};
    Student tab[] = {s1,s2,s3};
    Student tab2[] ={
        {"Jan","Kowalski", 1, 3.6},
        {"Anna","Kowalska", 2, 4.1},
        {"Krzysztof","Nowak", 3, 4.9}
    };
    return 0;
}
