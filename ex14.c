#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for (;; numero++)
    {
        if (numero % 3 != 0)
        {
            printf("%d\n", numero);
        }
        if (numero % 10 == 0 && numero != 0)
        {
            break;
        }
    }
    printf("Fim do programa.");
    return 0;
}