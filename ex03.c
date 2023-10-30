#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("====================================\n");
    printf("Calculadora Simples\n");
    printf("====================================\n");
    int numero1, numero2;
    char operacao[2];
    printf("Digite o n�mero 1: ");
    scanf("%d", &numero1);
    printf("Digite o n�mero 2: ");
    scanf("%d", &numero2);
    printf("Escolha a opera��o:\n Soma [ + ] - Subtra��o [ - ] - Produto [ x ] - Divis�o [ / ]: ");
    scanf("%s", operacao);

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
        printf("Operacao inv�lida!");
    }
    return 0;
}
