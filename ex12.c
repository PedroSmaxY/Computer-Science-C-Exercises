#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int index, numero;
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for (index = 0; index < numero; index++)
    {
        printf("%c\n", letra);
    }
    return 0;
}