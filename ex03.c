#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numero1, numero2;
    char operacao[10];
    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);
    system("clear");
    printf("Escolha a operacao:\n Soma[ soma ] - Subtracao[ sub ] - Produto[ multi ] - Divisao[ div ]: ");
    scanf("%s", operacao);
    
    if (strcmp(operacao, "soma") == 0) {
        printf("%d + %d = %d", numero1, numero2, numero1+numero2);

    } else if (strcmp(operacao, "sub") == 0) {
        printf("%d - %d = %d", numero1, numero2, numero1-numero2);

    } else if (strcmp(operacao, "multi") == 0) {
        printf("%d x %d = %d", numero1, numero2, numero1*numero2);

    } else if (strcmp(operacao, "div") == 0) {
        if (numero2 == 0) {
            printf("Erro: Divisao por zero!\n");
            return 0;
        }
        printf("%d / %d = %d", numero1, numero2, numero1/numero2);

    } else {
        printf("Operacao invalida!");
    }
    return 0;
}
