#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int i,len;
    char palabra1[20];
    char palabra2[20];

    printf("Introduzca la palabra: \n");
    scanf("%s", palabra1);
    scanf("%s", palabra2);

    len = strlen(palabra1);
    
    for(i = 0; i < len; i++){
        strcat(palabra1, palabra2);
    }
    printf("Palabra: %s\n",palabra1);

    return 0;
}