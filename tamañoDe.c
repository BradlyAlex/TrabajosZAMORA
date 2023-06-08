#include <stdio.h>
#include <stdlib.h>


int main(){

    char cadena[10];
    printf("Un int ocupa %d bytes", sizeof(int));
    printf("Un char ocupa %d bytes", sizeof(char));
    printf("Un float ocupa %d bytes", sizeof(float));
    printf("Un double ocupa %d bytes", sizeof(double));
    printf("Cadena ocupa %d bytes", sizeof(cadena));

    return 0;
}