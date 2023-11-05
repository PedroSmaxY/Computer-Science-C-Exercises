#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroUm, numeroDois;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        printf("Digite um número: ");
        scanf("%d", &numeroUm);
        printf("\nDigite outro número: ");
        scanf("%d", &numeroDois);
        printf("\n%d + %d = %d\n", numeroUm, numeroDois, numeroUm + numeroDois);
        
        printf("Quer continuar? [S/N]: ");
        scanf(" %c", &continuar);
    }
    return 0;
}