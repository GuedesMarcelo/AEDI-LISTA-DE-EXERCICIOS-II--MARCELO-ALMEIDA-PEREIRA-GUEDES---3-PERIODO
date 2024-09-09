#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int num) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
    int meio = (esquerda + direita) / 2;
    if (arr[meio] == num) {
       return 1;  
        }
    if (arr[meio] < num) {
       esquerda = meio + 1;
        } else {
       direita = meio - 1;
        }
    }
    return 0;
}

int main() {
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
                    53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int numero;
    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numero);
    if (buscaBinaria(primos, 25, numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
 printf("O número %d não é primo.\n", numero);
    }
    return 0;
}

