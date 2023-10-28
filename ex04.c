#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char *itens[] = {"PEDRA", "PAPEL", "TESOURA"};
    int continua = 1;

    while (continua) {
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        int computador = rand() % 3;

        printf("Suas opcoes:\n[0] PEDRA\n[1] PAPEL\n[2] TESOURA\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

        int pessoa;
        printf("Qual e a sua jogada? ");
        scanf("%d", &pessoa);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

        if(pessoa < 0 || pessoa > 2) {
            printf("Digite uma opcao valida!");
            continue;
        }

        printf("O computador jogou %s\n", itens[computador]);
        printf("O Jogador jogou %s\n", itens[pessoa]);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");


        if (computador == 0) { 
            if (pessoa == 0) {
                printf("EMPATE\n");
            } else if (pessoa == 1) {
                printf("O JOGADOR VENCEU\n");
            } else if (pessoa == 2) {
                printf("O COMPUTADOR VENCEU\n");
            }
        } else if (computador == 1) { 
            if (pessoa == 0) {
                printf("O COMPUTADOR VENCEU\n");
            } else if (pessoa == 1) {
                printf("EMPATE\n");
            } else if (pessoa == 2) {
                printf("O JOGADOR VENCEU\n");
            }
        } else if (computador == 2) { 
            if (pessoa == 0) {
                printf("O JOGADOR VENCEU\n");
            } else if (pessoa == 1) {
                printf("O COMPUTADOR VENCEU\n");
            } else if (pessoa == 2) {
                printf("EMPATE\n");
            }
        }

        printf("Deseja jogar novamente? (s/n): ");
        char escolha;
        scanf(" %c", &escolha);

        if (escolha != 's' && escolha != 'S') {
            continua = 0;
        }
    }

    return 0;
}
