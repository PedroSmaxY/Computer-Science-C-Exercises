#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int cubo(int numero)
{
    return pow(numero, 3);
}

int main()
{
    setlocale(LC_ALL, "");
    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("\n%d^3 = %d", numero, cubo(numero));
    return 0;
}