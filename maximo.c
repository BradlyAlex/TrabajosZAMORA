#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int numero1, numero2;

    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &numero1, &numero2);
    
    int mayor = maximo(numero1, numero2);
    printf("El mayor entre %d y %d es %d\n", numero1, numero2, mayor);
    return 0;
}
