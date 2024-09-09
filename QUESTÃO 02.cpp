#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int notas[50], frequencia[5] = {0}, i;
    srand(time(NULL)); 
    for (i = 0; i < 50; i++) {
    notas[i] = rand() % 5 + 1;  
    frequencia[notas[i] - 1]++;  
    }
    for (i = 0; i < 5; i++) {
        printf("Nota %d: %d vezes\n", i + 1, frequencia[i]);
    }
    return 0;
}

