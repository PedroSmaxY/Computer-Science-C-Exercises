#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;
    setlocale(LC_ALL, "");

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("%d", abs(numero));
    return 0;
}

int abs(int numero)
{
    if (numero < 0)
    {
        return numero * -1;
    }
    else
    {
        return numero;
    }
}