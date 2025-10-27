#include <stdio.h>
#include <string.h>

int main() {
    int i, usuario;
    char opcao[20];

    //Movimento da torre 5 casas para direita
    printf("MOVIMENTO DA TORRE\n");
    printf("Quantas casas a Torre deve se movimentar? ");
    scanf("%d", &usuario);
    for (i = 0; i < usuario; i++)
    {
        printf("Direita\n");
    }
    
    printf("\n");

    //Movimento do bispo 5 casas diagonal direita
    printf("MOVIMENTO DO BISPO\n");
    printf("Quantas casas o Bispo deve se movimentar? ");
    scanf("%d", &usuario);
    i = 0;
    while (i < usuario)
    {   
        printf("Direita\n");
        printf("Cima\n");
        i++;
    }
    printf("\n");

    //Movimento da rainha 8 casas esquerda
    printf("MOVIMENTO DA RAINHA\n");
    printf("Quantas casas a Rainha deve se movimentar? ");
    scanf("%d", &usuario);
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < usuario);

    printf("\n-----------ESPAÇO BRANCO-----------\n");

    //Movimento do cavalo (duas para baixo, uma para esquerda)
    printf("MOVIMENTO DO CAVALO\n");
    printf("O cavalo deve se movimentar para cima ou para baixo? ");
    scanf("%s", opcao);

    if (strcmp(opcao, "Baixo") == 0) {
        for (i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    } 
    else if (strcmp(opcao, "Cima") == 0) {
        for (i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    } 
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}
