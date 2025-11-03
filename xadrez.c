#include <stdio.h>

void movimentaçãoTorre (int numeroTorre){

    if (numeroTorre > 0){
        printf("Direita\n");

        movimentaçãoTorre (numeroTorre - 1);
    }

}

void movimentacaoBispo (int numeroBispo1, int numeroBispo2){;

   if (numeroBispo1 >0 ){
        printf("Cima, ");

        if (numeroBispo2 > 0){
            printf("Direita\n");

            movimentacaoBispo (numeroBispo1 - 1, numeroBispo2 - 1);
        }
   }
}

void movimentaçãoRainha (int numeroRainha){

    if (numeroRainha > 0){
        printf("Esquerda\n");

        movimentaçãoRainha (numeroRainha - 1);
    }

}

int main() {

    int casasTorre = 5;
    printf("MOVIMENTAÇÃO DA TORRE!\n");
    movimentaçãoTorre (casasTorre);


    int casasBispo = 5;
    printf("\nMOVIMENTAÇÃO DO BISPO!\n");
    movimentacaoBispo (casasBispo, casasBispo);
    

    int casasRainha = 8;
    printf("\nMOVIMENTAÇÃO DA RAINHA!\n");
    movimentaçãoRainha (casasRainha);





    /*int i, cavalo;

        // Movimentação da Torre em do-while
        printf("\nTORRE!\n");
        
        i = 1; // Inicializando o valor de i
        do{
            printf("Direita\n");
            i++;

        }while (i <= 5);

        // Movimentação do Bispo em while
        printf("\nBISPO!\n");

        i = 1; // Inicializando o valor de i
        while (i <= 5){
            
            printf("Direita, Cima\n");
            i++;
        }

        //Movimentação da Rainha em for
        printf("\nRAINHA!\n");

        for (i = 1; i <= 8; i++)

            printf("Esquerda\n");

        // Movimentação do Cavalo com loop aninhado while e for        
        printf("\nCAVALO!\n");

        cavalo = 1; // Inicializando o valor do cavalo

        while (cavalo > 0){

            for (int i = 1; i <= 2; i++){

                printf("Baixo\n");

            }

        cavalo--; // Decrementa o valo do cavalo
        
        }
        printf("Esquerda\n");
          
        printf("\n");*/

    return 0;
}
