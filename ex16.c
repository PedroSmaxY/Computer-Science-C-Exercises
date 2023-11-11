#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int indexRamos = 0, indexLetras, ramos;
    char letras = 'A';

    printf("\nDigite o número de ramos para a arvore: ");
    scanf("%d", &ramos);

    for (; indexRamos < ramos; indexRamos++, letras++)
    {
        for (indexLetras = 0; indexLetras <= indexRamos; indexLetras++)
        {
            printf("%c", letras);
        }
        printf("\n");
    }
    return 0;
}