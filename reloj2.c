#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned long long rdtsc(){
    unsigned int lo, hi;
    __asm__ volatile ("rdtsc": "=a" (lo) , "=d" (hi));
    return ((unsigned long long)hi << 32 )| lo;
    
}
int main (){
    unsigned long long start, end;
    unsigned long long cycles;
    start = rdtsc();

     clock_t inicio,fin;
     double tiempo;
     inicio = clock();
     system("firefox");
     fin = clock();
     tiempo = (double) (fin - inicio) / CLOCKS_PER_SEC;

     
     // printf("ciclos; %f"tiempo);
     end = rdtsc();
     cycles = end - start;
     printf("N° de ciclos de reloj realizados: %llu\n",cycles);
}