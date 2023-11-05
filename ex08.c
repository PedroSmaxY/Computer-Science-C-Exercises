#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("\nO número %d é Par!\n", numero);
        }
        else
        {
            printf("\nO número %d é Ímpar!\n", numero);
        }

        printf("\nQuer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    printf("Programa encerrado!");
    return 0;
}