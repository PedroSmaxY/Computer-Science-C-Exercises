#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroUm, numeroDois, numeroTres, menorNumero, maiorNumero;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite o n�mero um: ");
        scanf("%d", &numeroUm);
        printf("\nDigite o n�mero dois: ");
        scanf("%d", &numeroDois);
        printf("\nDigite o n�mero tr�s: ");
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
        printf("\no n�mero maior �: %d", maiorNumero);
        printf("\no n�mero menor �: %d", menorNumero);

        maiorNumero = 0;
        menorNumero = 0;

        printf("\nQuer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    printf("\nFim do programa");
    return 0;
}