#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char*brand;
    int number_of_cores;
};

int min_cores(struct Computer tab[], int n){
    int temp = tab[0].number_of_cores;
    for(int i=1;i<n;i++){
        if (temp > tab[i].number_of_cores){
            temp = tab[i].number_of_cores;
        }
    }
    return temp;
}

int main()
{
    struct Computer tab[]={{"HP",4},{"LG",3},{"ASUS",2}};
    printf("%d\n", min_cores(tab, 3));
    return 0;
}
