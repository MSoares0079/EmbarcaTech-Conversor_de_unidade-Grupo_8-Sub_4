#include <stdio.h>
double conversao_BitsATerabyte() {
    int A, B;
    double ValA;
    int conversoesIndex[] = {8, 1000, 1000, 1000, 1000};

    printf("Conversor de bits(BI) - 1, bytes(BY) - 2, kilobytes(KB) - 3, megabytes(MB) - 4, gigabytes(GB) - 5, terabytes(TB) - 6");
    printf("Escolha uma opcao de conversao de acordo com o numero ao lado da unidade, -1 para sair");
    printf("\nConverter de: ");
    scanf("%d", &A);
    if (A == -1) {
        return 0;
    };
    printf("\nCom o seguinte valor: ");
    scanf("%lf", &ValA);
    printf("Para a seguinte unidade: ");
    scanf("%d", &B);

    double resultado = ValA;
    if (A < B) {
        for (int i = A - 1; i < B - 1; i++) {
            resultado /= conversoesIndex[i];
        }
    } else {
        for (int i = B - 1; i < A - 1; i++) {
            resultado *= conversoesIndex[i];
        }
    }
    return resultado;
}
