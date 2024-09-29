#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int s1 = 5;
    int s2 = 20;
    int s3 = 20;
    int s4 = 30;

    printf("Semáforo 1:\n");
    while (s1 > 0) {
        printf("\r%02d", s1);

        clock_t stop = clock() + CLOCKS_PER_SEC;
        while (clock() < stop){}

        s1--;
    }

    printf("\rFechado! Pedestres podem atravessar.");

    printf("\n\n");

    printf("Semáforo 2:\n");
    while (s2 > 0) {
        printf("\r%02d", s2);

        clock_t stop = clock() + CLOCKS_PER_SEC;
        while (clock() < stop){}

        s2--;
    }

    printf("\rAberto!");



    return 0;
}
