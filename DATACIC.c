#include <stdio.h>
#include <stdlib.h>

struct empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    struct empleado e;

    // Pedimos al usuario que ingrese la información del empleado
    printf("Ingrese el nombre del empleado: ");
    scanf("%s", e.nombre);

    printf("Ingrese el sexo del empleado (M/F): ");
    scanf(" %c", &e.sexo);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e.sueldo);

    // Mostramos la información del empleado
    printf("\nInformacion del empleado:\n");
    printf("Nombre: %s\n", e.nombre);
    printf("Sexo: %c\n", e.sexo);
    printf("Sueldo: %.2f\n", e.sueldo);

    return 0;
}
