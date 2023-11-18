#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int impar(int numero)
{
    return (numero % 3 == 0) ? 1 : 0;
}

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("\nDigite um valor: ");
    scanf("%d", &numero);

    if (impar(numero) == 1)
    {
        printf("\nO numero %d é ímpar", numero);
    }
    else
    {
        printf("\nO numero %d é par", numero);
    }
    return 0;
}