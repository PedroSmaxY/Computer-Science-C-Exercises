#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroIndex, indexCrescente = 0, indexDecrescente;

    printf("\nDigite um número: ");
    scanf("%d", &numeroIndex);

    indexDecrescente = numeroIndex;

    if (numeroIndex >= 0)
    {
        for (; indexCrescente <= numeroIndex; indexCrescente++, indexDecrescente--)
        {
            printf("Crescente: %d, Decrescente: %d\n", indexCrescente, indexDecrescente);
        }
    }
    else
    {
        for (indexCrescente = numeroIndex; indexCrescente <= 0; indexCrescente++, indexDecrescente++)
        {
            printf("Crescente: %d, Decrescente: %d\n", indexCrescente, indexDecrescente);
        }
    }

    return 0;
}