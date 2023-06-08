#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palabra1[100];
    int i, j, esPalindroma = 1;

    printf("Ingrese una palabra: \n");
    scanf("%s", palabra1);

    j = strlen(palabra1) - 1;

    for (i = 0; i <strlen(palabra1); i++) {
        if (palabra1[i] != palabra1[j]) {
            esPalindroma = 0;
            break;
        }
        j--;
    }

    if (esPalindroma == 1) {
        printf("La palabra %s es palindroma\n", palabra1);
    } else {
        printf("La palabra %s no es palindroma\n", palabra1);
    }

    return 0;
}
