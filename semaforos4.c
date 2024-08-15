#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int semaforo1 = 5;
    int semaforo2 = 20;
    int semaforo3 = 20;
    int semaforo4 = 30;

    printf("Semáforo 1:\n");
    while (semaforo1 > 0) {
        printf("\r%02d", semaforo1);

        clock_t stop = clock() + CLOCKS_PER_SEC;
        while (clock() < stop){}

        semaforo1--;
    }

    printf("\rFechado! Pedestres podem atravessar.");

    printf("\n\n");

    printf("Semáforo 2:\n");
    while (semaforo2 > 0) {
        printf("\r%02d", semaforo2);

        clock_t stop = clock() + CLOCKS_PER_SEC;
        while (clock() < stop){}

        semaforo2--;
    }

    printf("\rAberto!");



    return 0;
}
