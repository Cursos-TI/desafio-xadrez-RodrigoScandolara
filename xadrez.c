#include <stdio.h>

//Criando recursividade para Torre
void movimentacaoTorre (int numeroTorre){

    if (numeroTorre > 0){
        printf("Direita\n");

        movimentacaoTorre (numeroTorre - 1); //Decremento
    }

}

//Criando recursividade para Bispo
void movimentacaoBispo (int numeroBispo1, int numeroBispo2){ //duas variáveis para movimentação em duas direções

    //Loop aninhado para movimento do Bispo
   if (numeroBispo1 >0 ){
        printf("Cima, ");

        if (numeroBispo2 > 0){
            printf("Direita\n");

            movimentacaoBispo (numeroBispo1 - 1, numeroBispo2 - 1); //Decremento
        }
   }
}

//Criando recursividade para Rainha
void movimentacaoRainha (int numeroRainha){

    if (numeroRainha > 0){
        printf("Esquerda\n");

        movimentacaoRainha (numeroRainha - 1); //Decremento
    }

}

int main() {

    //Executando o código para movimentação da Torre
    int casasTorre = 5;
    printf("MOVIMENTAÇÃO DA TORRE!\n");
    movimentacaoTorre (casasTorre); 

    //Executando o código para movimentação do Bispo
    int casasBispo = 5;
    printf("\nMOVIMENTAÇÃO DO BISPO!\n");
    movimentacaoBispo (casasBispo, casasBispo); //Duas variáveis "casaBispo" para chamar a recursividade com os movimentos nas duas direções
    
    //Executando o código para movimentação da Rainha
    int casasRainha = 8;
    printf("\nMOVIMENTAÇÃO DA RAINHA!\n");
    movimentacaoRainha (casasRainha);

    //Executando o código para movimentação do Cavalo, com Loop complexo
    printf("\nMOVIMENTAÇÃO DO CAVALO!\n");
    for (int cavalo1 = 0, cavalo2 = 0; cavalo1 < 3 && cavalo2 < 3; cavalo1++, cavalo2++){

        if ((cavalo1 < 2) && (cavalo2 < 2)){
            printf("Cima\n");
        }else{
            printf("Direita\n");
        }
        
    }
          
        printf("\n");

    return 0;
}
