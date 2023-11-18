#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void entre(int valor_x, int limite_inferior, int limite_superior)
{
    if (valor_x >= limite_inferior || valor_x <= limite_superior)
    {
        printf("O valor %d está no intervalo (%d <= %d <= %d)", valor_x, limite_inferior, valor_x, limite_superior);
    }
    else
    {
        printf("O valor %d não se encontra no intervalo", valor_x);
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int valor_x, limite_inferior, limite_superior;

    printf("\nDigite o valor de x: ");
    scanf("%d", &valor_x);

    printf("\nDigite o valor do limite inferior: ");
    scanf("%d", &limite_inferior);

    printf("\nDigite o valor do limite superior: ");
    scanf("%d", &limite_superior);

    entre(valor_x, limite_inferior, limite_superior);
    return 0;
}