#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroUm, numeroDois, numeroTres, menorNumero, maiorNumero;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite o número um: ");
        scanf("%d", &numeroUm);
        printf("\nDigite o número dois: ");
        scanf("%d", &numeroDois);
        printf("\nDigite o número três: ");
        scanf("%d", &numeroTres);

        menorNumero = numeroUm;
        maiorNumero = numeroUm;

        if (numeroDois > maiorNumero)
        {
            maiorNumero = numeroDois;
        }
        else if (numeroDois < menorNumero)
        {
            menorNumero = numeroDois;
        }
        if(numeroTres > maiorNumero)
        {
            maiorNumero = numeroTres;
        }
        else if (numeroTres < menorNumero)
        {
            menorNumero = numeroTres;
        }
        printf("\no número maior é: %d", maiorNumero);
        printf("\no número menor é: %d", menorNumero);

        maiorNumero = 0;
        menorNumero = 0;

        printf("\nQuer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    printf("\nFim do programa");
    return 0;
}