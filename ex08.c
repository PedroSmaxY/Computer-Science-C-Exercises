#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("\nO n�mero %d � Par!\n", numero);
        }
        else
        {
            printf("\nO n�mero %d � �mpar!\n", numero);
        }

        printf("\nQuer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    printf("Programa encerrado!");
    return 0;
}