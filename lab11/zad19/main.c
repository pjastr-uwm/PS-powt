#include <stdio.h>
#include <stdlib.h>

union Number{
    int a;
    float b;
};

struct DataNumber{
    int type;
    union Number data;
};

struct DataNumber getNumber(){
    printf("Podaj info co chcesz wpisac, 0 - liczba calk, 1 - liczba wym\n");
    struct DataNumber temp;
    scanf("%d", &temp.type );
    if (temp.type ==0){
        scanf("%d", & temp.data.a);
    }
    else{
        scanf("%f", & temp.data.b);
    }
    return temp;
};

void printNumber(struct DataNumber arg){
    if (arg.type ==0){
        printf("%d\n", arg.data.a);
    }
    else{
        printf("%f\n", arg.data.b);
    }
}

int main()
{
    struct DataNumber n1 = getNumber();
    printNumber(n1);
    return 0;
}
