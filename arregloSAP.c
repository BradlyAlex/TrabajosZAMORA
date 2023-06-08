#include <stdio.h>
#include <stdlib.h>


int main() {

    int i,n,x;
    char *buffer;

    printf("Teclea la longitud de la cadena: \n");
    scanf("%d",&i);
    buffer=(char*)malloc((i+1)*sizeof(char));
    if (buffer==NULL )exit(1);
    printf("Llene el arreglo: \n");
        for (n = 0; n< i; n++)
        scanf("%s",&buffer[n]);
        buffer[i]='\0';
    printf("Sus valores son: %s \n",buffer);
    free(buffer);
    
}