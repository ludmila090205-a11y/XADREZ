#include <stdio.h>
    

    //MOVIMENTO DA TORRE 5 CASAS DIREITA


    void moverTorre(int casasT) {
        if (casasT > 0){
            printf("Direita\n");
            moverTorre(casasT - 1);
        }
    }
    

    //MOVIMENTO DO BISPO 5 CASAS DIAGONAL DIREITA


   void moverBispo(int casasB) {
    if (casasB <= 0) return;
    for (int i = 1; i <= 1; i++) {
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }
    moverBispo(casasB - 1);
}


    //MOVIMENTO DA RAINHA 8 CASAS ESQUERDA


    void moverRainha(int casasR){
        if (casasR > 0){
            printf("Esquerda\n");
            moverRainha(casasR - 1);
        }
    }


    //MOVIMENTO DO CAVALO EM L (DUAS PRA CIMA E UMA PARA DIREITA)


    void moverCavalo(int casasC) {
    if (casasC > 0) {
        for (int i = 1; i <= 2; i++) {   
            printf("Cima\n");
            for (int j = 1; j <= 1; j++) { 
                if (i < 2) {
                    continue;
                }
                printf("Direita\n");
            }
        }

        moverCavalo(casasC - 1);
    }
}

    //FUNÇÃO PRINCIPAL QUE CHAMA AS OUTRAS VOIDS
    
    
    int main(){
        int Ptorre, Pbispo, Prainha, Pcavalo;
        printf("----JOGO DE XADREZ INICIADO----\n");
        printf("----MOVIMENTO DA TORRE----\n");
        printf("Quantas casas a torre deve percorrer? ");
        scanf("%d", &Ptorre);
        moverTorre(Ptorre);
        printf("\n");
        printf("----MOVIMENTO DO BISPO----\n");
        printf("Quantos movimentos o bispo deve fazer? ");
        scanf("%d", &Pbispo);
        moverBispo(Pbispo);
        printf("\n");
        printf("----MOVIMENTO DA RAINHA----\n");
        printf("Quantas casas a rainha deve percorrer? ");
        scanf("%d", &Prainha);
        moverRainha(Prainha);
        printf("\n");
        printf("----MOVIMENTO DO CAVALO----\n");
        printf("Quantos movimentos o cavalo deve fazer? ");
        scanf("%d", &Pcavalo);
        moverCavalo(Pcavalo);
        printf("\n");
        printf("----JOGO DE XADREZ FINALIZADO----\n");
        return 0;
    }
    