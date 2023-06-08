#include <stdio.h>
#include <stdlib.h>

struct atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int n_medallas;
};

int main() {
    struct atleta a;

    // Pedimos al usuario que ingrese la información del atleta
    printf("Ingrese el deporte del atleta: ");
    scanf("%s", a.deporte);

    printf("Ingrese el nombre del atleta: ");
    scanf("%s", a.nombre);

    printf("Ingrese el pais del atleta: ");
    scanf("%s", a.pais);

    printf("Ingrese el número de medallas del atleta: ");
    scanf("%d", &a.n_medallas);

    // Mostramos la información del atleta
    printf("\nInformacion del atleta:\n");
    printf("Deporte: %s\n", a.deporte);
    printf("Nombre: %s\n", a.nombre);
    printf("Pais: %s\n", a.pais);
    printf("Número de medallas: %d\n", a.n_medallas);

    return 0;
}
