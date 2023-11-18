#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valorMaximo(float numeroUm, float numeroDois, float numeroTres)
{
    float valorMaximo = numeroUm;
    valorMaximo = (numeroDois > valorMaximo) ? numeroDois : valorMaximo;
    valorMaximo = (numeroTres > valorMaximo) ? numeroTres : valorMaximo;
    return valorMaximo;
}

int main()
{
    setlocale(LC_ALL, "");
    float numeroUm, numeroDois, numeroTres;

    printf("\nDigite o primeiro valor: ");
    scanf("%f", &numeroUm);
    printf("\nDigite o segundo valor: ");
    scanf("%f", &numeroDois);
    printf("\nDigite o terceiro valor: ");
    scanf("%f", &numeroTres);

    printf("\nO maior valor é: %.2f", valorMaximo(numeroUm, numeroDois, numeroTres));
    return 0;
}
