#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int escolha, verdadeiro = 1, contador = 0, valida = 1;
    float media, total = 0;
    char continuar;

    while (verdadeiro != 0)
    {
        printf("Escolha sua Disciplina\n");
        printf("[1] - C�lculo de uma Variável\n[2] - Bases de Programação\n");
        printf("[3] - Modelagem de Novos Negócios\n[4] - Paradigmas de Linguagens de Programação\n");
        printf("Qual a sua escolha? ");
        scanf("%d", &escolha);

        printf("Digite sua média: ");
        scanf("%f", &media);
        total += media;
        contador++;

        while (valida != 0)
        {
            printf("Quer continuar? [S / N]: ");
            scanf(" %c", &continuar);
            if (continuar == 'S' || continuar == 's' || continuar == 'N' || continuar == 'n')
            {
                break;
            }
        }

        if (continuar == 'N' || continuar == 'n')
        {
            verdadeiro = 0;
        }
    }

    if (contador > 0)
    {
        float mediaFinal = total / contador;
        printf("Média das notas: %.2f\n", mediaFinal);
    }

    return 0;
}
