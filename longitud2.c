#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char cad[10];
    int i,j,con;
    printf("Introduce una palabra: ");
    scanf("%s", cad);
    con= strlen(cad);
    for(i=0; i<con; i++){
        for ( j = 0; j<con; j++){
            printf("*");
        }
        printf("\n");
    }
    system("Pause");

    return 0;
}