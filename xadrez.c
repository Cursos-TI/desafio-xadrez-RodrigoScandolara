#include <stdio.h>

int main() {

    int opcao, i;

    // todo programa dentro do "do-while" para criar um looping onde o jogador sempre escolhe uma peça, até querer sair do jogo.
    do{

    // Exibindo menu de seleção da peça.
    printf("\n** MOVIMENTAÇÃO DAS PEÇAS DE XADREZ **\n");
    printf("# Escolha uma opção. #\n");
    printf("\n1. Para Torre.\n");
    printf("2. Para Bispo.\n");
    printf("3. Para Rainha.\n");
    printf("Digite qualquer outro número ara sair do jogo.\n");
    printf("\nOpção escolhida: ");
    scanf("%d", &opcao);

    // Estrutura criada dentro do "switch" para dar suporte às escolhas do usuário.
    switch (opcao){

        // Case 1 para a escolha da TORRE, utilizando do-while.
        case 1:

            i = 1;

            printf("\nVocê escolheu TORRE!\n");

            do{
                printf("Direita\n");
                i++;

            }while (i <= 5);

        break;

        // Case 2 para a esolha do BISPO, utilizando o while.
        case 2:

            i = 1;

            printf("\nVocê escolheu BISPO!\n");

            while (i <= 5){

                printf("Direita, Cima\n");
                i++;
            }
        break;

        // Case 3 para a escolha da RAINHA, utilizando o for.
        case 3:

        printf("\nVocê escolheu RAINHA!\n");

        for (int i = 1; i <= 8; i++)

            printf("Esquerda\n");
        
        break;
       
    }

  // Finalizando a estrutura principal de "do-while", com a escolha de um número > 3 ou <= 0 para sair do jogo.  
} while (opcao <= 3 && opcao > 0);

    printf("Saindo do jogo...\n");

    return 0;
}
