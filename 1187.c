#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    int i, j, elementos;
    double soma, matriz[12][12];

    scanf("%c", &operacao);

    soma = 0;
    elementos = 0;
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if (j < 11 - i && j > i) {
                soma += matriz[i][j];
                elementos++;
            }
        }
    }

    if (operacao == 'S')
        printf("%.1lf\n", soma);
    else if (operacao == 'M' && elementos != 0)
        printf("%.1lf\n", soma/elementos);

    return 0;
}

