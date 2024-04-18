#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

void wstrCopyNew(wchar_t src[], wchar_t dest[]){
    int i=0;
    while(src[i] !=0){
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
}

int main()
{
    setlocale(LC_ALL,"");
    wchar_t n1[] = L"ŁĄKA";
    wchar_t n2[] = L"informatyka";
    wprintf(L"%s %s\n", n1, n2);
    wstrCopyNew(n1, n2);
    wprintf(L"%s %s\n", n1, n2);
    wchar_t n3[20];
    wstrCopyNew(n1, n3);
    wprintf(L"%s %s\n", n1, n3);
    return 0;
}
