//Torre(5, direita) FOR
//Bispo(5, diagonal direita) WHILE
//Rainha(8, esquerda) DO-WHILE
#include <stdio.h>
 
int main() {
    int i, usuario;
    //Movimento da torre 5 casas para direita
    printf("MOVIMENTO DA TORRE\n");
    printf("Quantas casas a Torre deve se movimentar? ");
    scanf("%d", &usuario);
    for (i = 0; i < usuario; i++)
    {
        printf("Direita\n"); //Informe a direção do movimento
    }
    
    printf("\n");

    //Movimento do bispo 5 casas diagonal direita
    printf("MOVIMENTO DO BISPO\n");
    printf("Quantas casas o Bispo deve se movimentar? ");
    scanf("%d", &usuario);
    i = 0;
    while (i < usuario)
    {   
        printf("Direita \n");
        printf("Cima \n");
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
    
    return 0;
}