#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double conversao(int A, double ValA, int B, int conversoesIndex[]);

int main () {
    int conversoesIndex[] = {8, 1000, 1000, 1000, 1000};
    int op_converter;
    double converter;

    int op_alvo;
    while (1) {
        printf("Conversor de bits(BI) - 1, bytes(BY) - 2, kilobytes(KB) - 3, megabytes(MB) - 4, gigabytes(GB) - 5, terabytes(TB) - 6");
        printf("Escolha uma opcao de conversao de acordo com o numero ao lado da unidade, -1 para sair");
        printf("\nConverter de: ");
        scanf("%d", &op_converter);
        if (op_converter == -1) {
            exit(1);
        };
        printf("\nCom o seguinte valor: ");
        scanf("%lf", &converter);
        printf("Para a seguinte unidade: ");
        scanf("%d", &op_alvo);
        printf("Resultado %e\n\n", conversao(op_converter, converter, op_alvo, conversoesIndex));
    }
    
    
    return 0;
}

double conversao(int A, double ValA, int B, int conversoesIndex[]) {
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
