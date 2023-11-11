#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero = 0, index = 33;
    char letra = 33;

    for (; index <= 126; index++, letra++, numero++)
    {
        printf("%d --> %c\n", numero, letra);
    }

    return 0;
}