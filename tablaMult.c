#include <stdio.h>

int main() {
    int n, i, j;
    int *p;

    printf("Dame un numero para darte su tabla de multiplicar: ");
    scanf("%d", &n);

    p = &n;

    for(i = 1; i <= 10; i++) {
        printf("%d\t", i * (*p));
        for(j = 2; j <= 10; j++) {
            printf("%d\t", i * j * (*p));
        }
        printf("\n");
    }

    return 0;
}
