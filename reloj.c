#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#define ARRAY_SIZE 200000

static inline uint64_t rdtsc(){
    uint32_t lo, hi;
    __asm__ volatile("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) |lo;
}

int main() {

    const char* command= "xdg-open https://www.google.com";
    int* array=(int*)malloc(sizeof(int)*ARRAY_SIZE);
    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++){
        array[i]=rand() % ARRAY_SIZE;
    }
    
    uint64_t inicio_sin_apuntadores=rdtsc();
    int resultado= system(command);
    uint64_t fin_sin_apuntadores=rdtsc();
    uint64_t ciclos_sin_apuntadores= fin_sin_apuntadores-inicio_sin_apuntadores;
    
    uint64_t inicio_con_apuntadores=rdtsc();
    int* ptr=array;
    for (int i = 0; i < ARRAY_SIZE; i++){
        int valor=*(ptr+i);
        int encontrado = 0;
        for (int j = 0; j < ARRAY_SIZE; j++){
            if (i != j && *(ptr+j) == valor){
                encontrado = 1;
                break;
            }
        }
        if (encontrado){
            numHits++;
        }else{
            numMiss++;
        }
    }
    uint64_t fin_con_apuntadores=rdtsc();
    uint64_t ciclos_con_apuntadores= fin_con_apuntadores-inicio_con_apuntadores;

    printf("La aplicación sin apuntadores usó: %lu ciclos de reloj\n", ciclos_sin_apuntadores);
    printf("La aplicación con apuntadores usó: %lu ciclos de reloj\n", ciclos_con_apuntadores);
    free(array);
    return 0;
}
