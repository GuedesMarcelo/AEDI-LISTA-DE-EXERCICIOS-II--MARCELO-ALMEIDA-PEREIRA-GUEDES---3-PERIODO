#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[11];  
    int vidas, tamPalavra, acertos = 0;
    char letra;
    int i, achou;

    printf("Digite a palavra secreta (max 10 letras): ");
    scanf("%s", palavra);
    
    tamPalavra = strlen(palavra);
    vidas = tamPalavra + 2; 
    char visivel[11] = {0}; 
    while (vidas > 0 && acertos < tamPalavra) {
        achou = 0;
        printf("\nPalavra: ");
        for (i = 0; i < tamPalavra; i++) {
        if (visivel[i]) printf("%c ", palavra[i]);
        else printf("_ ");
        }
        printf("\nVidas restantes: %d\n", vidas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra); 
        for (i = 0; i < tamPalavra; i++) {
        if (tolower(palavra[i]) == letra && !visivel[i]) {
        visivel[i] = 1;
        acertos++;
        achou = 1;
            }
        }
        if (!achou) vidas--;
    }
    if (acertos == tamPalavra)
        printf("\nParabéns! Você descobriu a palavra: %s\n", palavra);
    else
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);

    return 0;
}

