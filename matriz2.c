#include <stdio.h>

#define FILAS 10
#define COLUMNAS 10

int main() {
    int matriz[FILAS][COLUMNAS];
    int *p;

    // Inicializamos la matriz con valores aleatorios
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 10 + 1; // Genera números aleatorios entre 1 y 10
        }
    }

    // Imprimimos la matriz
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculamos los multiplicativos de cada posición de la matriz
    for(int i = 0; i < FILAS; i++) {
        for(int j = 0; j < COLUMNAS; j++) {
            p = &matriz[i][j]; // Obtenemos el apuntador a la posición actual
            int multiplicativo = 1;

            // Calculamos el producto de los elementos de la fila y la columna de la posición actual
            for(int k = 0; k < FILAS; k++) {
                multiplicativo *= matriz[i][k]; // Productoria de la fila
                multiplicativo *= matriz[k][j]; // Productoria de la columna
            }

            // Restamos el valor de la posición actual ya que fue multiplicado dos veces
            multiplicativo -= *p;

            printf("El multiplicativo de la posición (%d, %d) es: %d\n", i, j, multiplicativo);
        }
    }

    return 0;
}
