#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char palabra1[100];
   int cont[27] = {0};
   int lon, i;

   printf("Ingrese una palabra: \n");
   scanf("%s", palabra1);

   lon= strlen(palabra1);

   for (i = 0; i < lon; i++) {
      cont[palabra1[i] - 'a']++;
   }

   printf("Ocurrencias Encontradas:\n");
   for (i = 0; i < 26; i++) {
      if (cont[i] > 0) {
         printf("%c: %d\n", i + 'a', cont[i]);
      }
   }

   return 0;
}