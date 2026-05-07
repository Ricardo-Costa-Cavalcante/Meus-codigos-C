#include <stdio.h>

/*
 * Autor: Ricardo Costa
 * Descrição: Programa em C que realiza uma contagem regressiva a partir de um número
 * fornecido pelo usuário e exibe cada valor até chegar a zero.
 */

int main() {
    int numero; // variável para armazenar o número digitado pelo usuário

    // Solicita ao usuário que informe um número para a contagem regressiva
    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &numero);

    // Exibe a mensagem inicial da contagem regressiva
    printf("Contagem regressiva:\n");

    // Laço que decrementa o valor de 'numero' até chegar a zero
    for (int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    // Lê um caractere para manter o console aberto antes de exibir a mensagem final
    getchar();
    printf("Contagem regressiva concluída!\n");

    // Lê outro caractere para aguardar o Enter do usuário antes de encerrar
    getchar();
    return 0;
}