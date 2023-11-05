#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int valorA, valorB, holder;

    printf("digite o valor da variável A: ");
    scanf("%d", &valorA);

    printf("\ndigite o valor da variável B: ");
    scanf("%d", &valorB);

    holder = valorA;
    valorA = valorB;
    valorB = holder;

    printf("\nO valor A: %d\nO valor B: %d", valorA, valorB);

    return 0;
}