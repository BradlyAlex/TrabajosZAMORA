#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    char palabra[100];
    int i = 0;

    printf("Ingresa una palabra: ");

    while ((c = getchar()) != ' ' && c != '\n') {
        palabra[i] = c;
        i++;
    }

    palabra[i] = '\0';

    printf("La palabra al revés es: ");
    for (int j = i-1; j >= 0; j--) {
        printf("%c", palabra[j]);
    }
    printf("\n");

    return 0;
}