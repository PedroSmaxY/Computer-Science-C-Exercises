#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;
    char operacao;
    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);
    printf("Escolha a operacao:\n Soma[ + ] - Subtracao[ - ] - Produto[ x ] - Divisao[ / ]: ");
    scanf(" %c", &operacao);
    
    if (operacao == '+') {
        printf("%d + %d = %d", numero1, numero2, numero1+numero2);

    } else if (operacao == '-') {
        printf("%d - %d = %d", numero1, numero2, numero1-numero2);

    } else if (operacao == 'x') {
        printf("%d x %d = %d", numero1, numero2, numero1*numero2);

    } else if (operacao == '/') {
        if (numero2 == 0) {
            printf("Erro: Divisao por zero!\n");
            return 0;
        }
        printf("%d / %d = %.0f", numero1, numero2, (double)numero1/numero2);

    } else {
        printf("Operacao invalida!");
    }
    return 0;
}
