#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

long int conversao_hora(int numero_horas, char tipo)
{
    return (tipo == 'h' || tipo == 'H') ? numero_horas 
    : (tipo == 'm' || tipo == 'M') ? numero_horas * 60
    : (tipo == 's' || tipo == 'S') ? numero_horas * 3600
    : 0;
}

int main()
{
    setlocale(LC_ALL, "");
    int numero_horas;
    char tipo, tipoString[10], continuar;
    
    while(1)
    {

        printf("\nDigite um valor de hora: ");
        scanf("%d", &numero_horas);
        
        while(1)
        {
        printf("\nEscolha uma conversão:\n[ S ] - segundos\n[ M ] - minutos\n[ H ] - horas");
            printf("\nDigite sua opção: ");
            scanf(" %c", &tipo);
            if (tipo == 's'|| tipo == 'S' || tipo == 'm' || tipo == 'M' || tipo == 'h' || tipo == 'H')
            {
                break;
            }
            printf("\nValor incorreto!");
        }

        (tipo == 's' || tipo == 'S') ? strcpy(tipoString,"Seg")
        : (tipo == 'm' || tipo == 'M') ? strcpy(tipoString,"Min") 
        : (tipo == 'h' || tipo == 'H') ? strcpy(tipoString,"Hrs")
        : 0;

        printf("\nO resultado da conversão é: %ld %s\n", conversao_hora(numero_horas, tipo), tipoString);

        while(1)
        {
            printf("\nQuer continuar [S/N]: ");
            scanf(" %c", &continuar);
            if (continuar == 's' || continuar == 'S' || continuar == 'n' || continuar == 'N')
            {
                break;
            }
            else
            {
                printf("\nDigite uma opção válida!");
                continue;
            }
        }
        if (continuar == 'n' || continuar == 'N')
        {
            break;
        }
    }
    printf("\nFim do programa!\n");
    return 0;
}