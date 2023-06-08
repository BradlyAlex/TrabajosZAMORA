#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char p1[20];
    char p2[20];
    int res;


    printf("Introduzca la palabra: \n");
    scanf("%s", p1);
    scanf("%s", p2);
    res=strcmp(p1,p2);

    if (res==0 ){
    printf("AMBAS PALABRAS SON IGUALES %d", res);
        }else if (res>0){
    printf("LA 1° PALABRA ES MAYOR %d", res);
        }else if (res<0){
    printf("LA 2° PALABRA ES MENOR %d",res);
    }

    return 0;
}
    

