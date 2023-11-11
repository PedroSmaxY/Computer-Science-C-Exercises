#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int indexRamos = 0, indexAsteristicos, ramos;

    printf("\nDigite o número de ramos para a arvore: ");
    scanf("%d", &ramos);

    for (; indexRamos < ramos; indexRamos++)
    {
        for (indexAsteristicos = 0; indexAsteristicos <= indexRamos; indexAsteristicos++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}