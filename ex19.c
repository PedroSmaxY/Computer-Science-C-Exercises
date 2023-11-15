#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[50], estadoCivilString[50], sexo, sexoString[25];
    int tempoDeRelacionamento, estadoCivil;

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite seu sexo[M/F] ou [I] para digitar: ");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'M')
    {
        strcpy(sexoString, "Masculino");
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        strcpy(sexoString, "Feminino");
    }
    else
    {
        printf("\nDigite: ");
        scanf("%s", sexoString);
    }
    

    printf("\nEstado Civil:\nCasado[ 1 ]\nSolteiro[ 2 ]\nSeparado[ 3 ]\nDivorciado [ 4 ]\nViúvo [ 5 ]");
    printf("\nEscolha seu estado Civil: ");
    scanf("%d", &estadoCivil);

    switch (estadoCivil)
    {
        case 1:
            printf("\nDigite o tempo de relacionamento: ");
            scanf("%d", &tempoDeRelacionamento);
            strcpy(estadoCivilString, "CASADO");
            break;
        case 2:
            strcpy(estadoCivilString, "SOLTEIRO");
            break;
        case 3:    
            strcpy(estadoCivilString, "SEPARADO");
            break;
        case 4:
            strcpy(estadoCivilString, "DIVORCIADO");
            break;
        case 5:
            strcpy(estadoCivilString, "VIÚVO");
            break;
        default:
            printf("Opção invalida");
            return 0;
    }
    
    if (estadoCivil != 1) 
    {
        printf("\nNome: %s\nSexo: %s\nestado cívil: %s", nome, sexoString, estadoCivilString);
    }
    else
    {
        printf("\nNome: %s\nSexo: %s\nestado cívil: %s\ntempo de relacionamento: %d", nome, sexoString, estadoCivilString, tempoDeRelacionamento);
    }
    return 0;
}
