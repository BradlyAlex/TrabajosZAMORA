#include <stdio.h>
#include <stdlib.h>


int main() {

#ifdef __BYTE_ORDER__
    #if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
        printf("Arquitectura BIG ENDIAN\n");
    #elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
        printf("Arquitectura LITTLE ENDIAN\n");
    #else
        printf("Esta Arquitectura es DESCONOCIDA\n");
    #endif
#else
    printf("No se puede determinar la arquitectura\n");
#endif

    return 0;
}