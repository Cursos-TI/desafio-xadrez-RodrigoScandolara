#include <stdio.h>

int main() {

    int i, cavalo;

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
          
        printf("\n");

    return 0;
}
