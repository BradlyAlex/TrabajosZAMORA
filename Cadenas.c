#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int len;
    char origen[]="brisas";
    char destino[11]="Para";


    strcat(destino,origen);
    printf("Destino: %s ", destino);
    
    system("Pause");
    return 0;
}