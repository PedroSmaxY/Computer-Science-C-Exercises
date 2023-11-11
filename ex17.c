#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;

    while (1)
    {
        printf("Digite um número entre 1 e 100: ");
        scanf("%d", &numero);
        if (numero >= 1 && numero <= 100)
        {
            break;
        }
    }

    printf("O número digitado foi: %d\n", numero);

    return 0;
}