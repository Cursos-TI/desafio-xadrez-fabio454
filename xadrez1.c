#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Movimento da Torre (5 casas para a direita) - utilizando for
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) - utilizando while
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita %d\n", j);
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda) - utilizando do-while
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;

    } while (k <= 8);

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) - utilizando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int m = 1; m <= 2; m++) {
        printf("Baixo %d\n", m);
    }
    int n = 1;
    while (n <= 1) {
        printf("Esquerda %d\n", n);
        n++;
    }

    return 0;
}
