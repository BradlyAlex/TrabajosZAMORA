#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int res;
    char str1[]="para";
    char str2[]="para";

    res=strcmp(str1, str2);
    printf("RESULTADO: %d ", res);

    system("pause");
    return 0;
}