#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, i;
    int *arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    // Asignamos memoria dinámica para el arreglo usando la función malloc
    arr = (int*) malloc(x * sizeof(int));

    // Verificamos si la asignación de memoria dinámica fue exitosa
    if (arr == NULL) {
        printf("No se pudo asignar memoria dinamica.");
        exit(0);
    }

    // Pedimos al usuario que ingrese los elementos del arreglo usando apuntadores
    printf("Ingrese los elementos del arreglo:\n");
    for (i = 0; i < x; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", arr+i);
    }

    // Mostramos los elementos del arreglo
    printf("\nLos elementos del arreglo son:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", *(arr+i));
    }

    // Liberamos la memoria dinámica asignada al arreglo
    free(arr);

    return 0;
}
