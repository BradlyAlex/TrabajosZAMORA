#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   
    char palabra1[20];
    char palabra2[20];
    char aux[20];

    printf("Introduzca la palabra: \n");
    scanf("%s",palabra1);
    scanf("%s",palabra2);
    
    printf("Palabra1: %s\n",palabra1 );
    printf("Palabra2: %s\n",palabra2 );


    strcpy(aux, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, aux);

    printf("Palabra1: %s\n",palabra1 );
    printf("Palabra2: %s\n",palabra2 );

    system("Pause");
    return 0;
}