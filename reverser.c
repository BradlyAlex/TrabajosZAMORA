#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i;
    char *arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    // Asignamos memoria dinámica para el arreglo usando la función malloc
    arr = (char*) malloc(x * sizeof(char));

    // Verificamos si la asignación de memoria dinámica fue exitosa
    if (arr == NULL) {
        printf("No se pudo asignar memoria dinamica.");
        exit(0);
    }

    // Pedimos al usuario que ingrese los elementos del arreglo usando apuntadores
    printf("Ingrese los elementos del arreglo:\n");
    for (i = 0; i < x; i++) {
        printf("Elemento %d: ", i+1);
        scanf(" %c", arr+i);
    }

    // Mostramos los elementos del arreglo en forma inversa usando apuntadores
    printf("\nEl arreglo en forma inversa es:\n");
    for (i = x-1; i >= 0; i--) {
        printf("%c", *(arr+i));
    }

    // Liberamos la memoria dinámica asignada al arreglo
    free(arr);

    return 0;
}
