#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * n1 = "ABC";
    printf("%s\n", n1);
    //n1[0] ='Z';
    char n2[] = "ABC";
    printf("%s\n", n2);
    n2[0] = 'Z';
    printf("%s\n", n2);
    return 0;
}
