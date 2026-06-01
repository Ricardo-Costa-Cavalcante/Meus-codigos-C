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
    if (scanf("%d", &numero) != 1) {
        printf("Entrada inválida. Digite apenas números inteiros.\n");
        return 1;
    }

    if (numero < 0) {
        printf("Número negativo. Não há contagem regressiva para valores negativos.\n");
        return 0;
    }

    // Exibe a mensagem inicial da contagem regressiva
    printf("Contagem regressiva:\n");

    // Laço que decrementa o valor de 'numero' até chegar a zero
    for (int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    printf("Contagem regressiva concluída!\n");
    return 0;
}