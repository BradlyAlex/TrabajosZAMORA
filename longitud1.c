#include <stdio.h>
#include <stdlib.h>



int main(){
    int len;
    char cad[]="Es una Cadena";
    len = strlen(cad);
    printf("La longitud de \'%s\' es: %d\n", cad, len);
    system("Pause");
    return 0;
}