#include <stdio.h>

int buscaBinaria(int contas[], int tamanho, int contaProcurada, int *comparacoes) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
    (*comparacoes)++;
    int meio = (esquerda + direita) / 2;
      if (contas[meio] == contaProcurada) {
      return meio;  
        }
      if (contas[meio] < contaProcurada) {
      esquerda = meio + 1;
        } else {
      direita = meio - 1;
        }
    }
    return -1; 
}
int main() {
    int contas[100], contaProcurada, comparacoes = 0;
    for (int i = 0; i < 100; i++) {
        contas[i] = 1000 + i;
    }
    printf("Digite o número da conta a ser procurada: ");
    scanf("%d", &contaProcurada);
    int posicao = buscaBinaria(contas, 100, contaProcurada, &comparacoes);
    if (posicao != -1) {
        printf("Conta encontrada na posição %d\n", posicao);
    } else {
        printf("Conta não encontrada\n");
    }
    printf("Número de comparações: %d\n", comparacoes);
    return 0;
}

