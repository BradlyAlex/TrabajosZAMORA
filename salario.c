#include <stdio.h>

int main() {
    float precio_hora, salario_semanal;
    int horas_trabajadas;

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precio_hora);

    printf("Ingrese las horas trabajadas en la semana: ");
    scanf("%d", &horas_trabajadas);

    if (horas_trabajadas <= 40) {
        salario_semanal = precio_hora * horas_trabajadas;
    } else {
        salario_semanal = (40 * precio_hora) + ((horas_trabajadas - 40) * precio_hora * 1.5);
    }

    printf("El salario semanal del empleado es de: $%.2f\n", salario_semanal);

    return 0;
}