#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero1, numero2;
    char operacao[2];

    printf("====================================\n");
    printf("Calculadora Simples\n");
    printf("====================================\n");
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);
    printf("====================================\n");
    printf("Escolha a operação:\nSoma [ + ]\nSubtração [ - ]\nProduto [ x ]\nDivisão [ / ]: ");
    scanf("%s", operacao);
    printf("====================================\n");

    if (strcmp(operacao, "+") == 0)
    {
        printf("%d + %d = %d", numero1, numero2, numero1 + numero2);
    }
    else if (strcmp(operacao, "-") == 0)
    {
        printf("%d - %d = %d", numero1, numero2, numero1 - numero2);
    }
    else if (strcmp(operacao, "x") == 0)
    {
        printf("%d x %d = %d", numero1, numero2, numero1 * numero2);
    }
    else if (strcmp(operacao, "/") == 0)
    {
        if (numero2 == 0)
        {
            printf("Erro: Divisão por zero!\n");
            return 0;
        }
        printf("%d / %d = %d", numero1, numero2, numero1 / numero2);
    }
    else
    {
        printf("Operação inválida!");
    }
    return 0;
}
