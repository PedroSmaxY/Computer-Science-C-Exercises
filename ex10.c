#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroUm, numeroDois;
    char continuar = 'S', operacao;

    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite um número: ");
        scanf("%d", &numeroUm);
        printf("\nDigite outro número: ");
        scanf("%d", &numeroDois);

        printf("Escolha a Operação:\n");
        printf("Soma [ + ]\nSubtração [ - ]\nProduto [ * ]\nDivisão [ / ]: ");
        scanf(" %c", &operacao);

        switch (operacao)
        {
        case '+':
            printf("\n%d + %d = %d", numeroUm, numeroDois, numeroUm + numeroDois);
            break;
        case '-':
            printf("\n%d - %d = %d", numeroUm, numeroDois, numeroUm - numeroDois);
            break;
        case '*':
            printf("\n%d x %d = %d", numeroUm, numeroDois, numeroUm * numeroDois);
            break;
        case '/':
            if (numeroDois == 0)
            {
                printf("\nImpossível, divisão por zero!");
                continue;
            }
            else
            {
                printf("\n%d / %d = %d", numeroUm, numeroDois, numeroUm / numeroDois);
            }
            break;
        }
        printf("\nQuer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    
}