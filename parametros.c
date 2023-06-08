#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaTriangulo(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float area= sqrt(p*(p-a)*(p-b)*(p-c));

    return area;
}

int main() {
    float areaT1 = areaTriangulo(3, 4, 5);
    float areaT2 = areaTriangulo(7, 8, 10);
    float areaT3 = areaTriangulo(5, 12, 13);

    printf("%f\n", areaT1);
    printf("%f\n", areaT2);
    printf("%f\n", areaT3);

    return 0;
}