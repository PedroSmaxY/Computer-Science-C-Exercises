#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i;

    for(i = 0; i <= 255; i++) {
        printf("Código ASCII: %d, Caractere: %c\n", i, i);
    }
    return 0;
}