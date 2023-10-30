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
    printf("Digite um n�mero: ");
    scanf("%d", &numero1);
    printf("Digite outro n�mero: ");
    scanf("%d", &numero2);
    printf("====================================\n");
    printf("Escolha a opera��o:\nSoma [ + ]\nSubtra��o [ - ]\nProduto [ x ]\nDivis�o [ / ]: ");
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
            printf("Erro: Divis�o por zero!\n");
            return 0;
        }
        printf("%d / %d = %d", numero1, numero2, numero1 / numero2);
    }
    else
    {
        printf("Opera��o inv�lida!");
    }
    return 0;
}
