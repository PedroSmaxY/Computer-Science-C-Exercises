#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int n_segundos(int n_horas)
{
    return n_horas * pow(60, 2);
}

int main()
{
    int n_horas;
    setlocale(LC_ALL, "");

    printf("\nDigite um valor de hora: ");
    scanf("%d", &n_horas);

    printf("\n%d hora(s) é equivalente a %d segundos", n_horas, n_segundos(n_horas));
    return 0;
}