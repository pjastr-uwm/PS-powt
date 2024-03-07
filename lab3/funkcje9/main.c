#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(int n)
{
    if (n==0)
        return 1;
    return n* calculateFactorialRecursively(n-1);
}

int main()
{
    printf("%d\n", calculateFactorialRecursively(4));
    return 0;
}
