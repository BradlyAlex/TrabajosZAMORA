#include <stdio.h>
#include <math.h>

int main() {
   float hipotenusa = 100.0;
   float lado = hipotenusa / sqrt(2); // Calculamos la longitud de un lado del cuadrado
   float area = lado * lado; // Calculamos el área del cuadrado
   printf("El área del cuadrado es: %f", area);
   return 0;
}
