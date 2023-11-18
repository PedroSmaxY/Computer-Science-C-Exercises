#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Minus(int valor)
{
    return (valor > 0) ? valor * -1 : valor;
}

int main()
{
    setlocale(LC_ALL, "");
    int valor;

    printf("\nDigite um valor: ");
    scanf("%d", &valor);

    printf("\nO valor negativo é: %d", Minus(valor));
    return 0;
}