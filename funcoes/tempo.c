#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define SEGUNDOS 1
#define MINUTOS 2
#define HORAS  3


double tempo() {
    int tipo_inicial, tipo_final;
    double valor, resultado;

    // Opções de conversão de unidades de tempo
    while(tipo_inicial>3 || tipo_inicial<1) // Enquanto a unidade inicial for inválida 
    {

        printf("Escolha a unidade inicial de tempo:\n");
        printf("1. Segundos\n");
        printf("2. Minutos\n");
        printf("3. Horas\n");
        printf("Digite sua escolha (1-3): ");
        scanf("%d", &tipo_inicial);
    }

    // O valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Escolha da unidade final de tempo
    while(tipo_final>3 || tipo_final<1)// Enquanto a unidade final for inválida 
    {
        printf("Escolha a unidade final de tempo:\n");
        printf("1. Segundos\n");
        printf("2. Minutos\n");
        printf("3. Horas\n");
        printf("Digite sua escolha (1-3): ");
        scanf("%d", &tipo_final);
    }

    switch (tipo_inicial) {
        case SEGUNDOS:
            switch (tipo_final) {
                case SEGUNDOS: 
                    resultado = valor;
                    break;
                case MINUTOS: 
                    resultado = valor / 60.0;
                    break;
                case HORAS:
                    resultado = valor / 3600.0;
                    break;
                default:
                    return 0;
            }
            break;
        case MINUTOS: 
            switch (tipo_final) {
                case SEGUNDOS:
                    resultado = valor * 60.0;
                    break;
                case MINUTOS: 
                    resultado = valor;
                    break;
                case HORAS: 
                    resultado = valor / 60.0;
                    break;
                default:
                    return 0;
            }
            break;
        case HORAS:
            switch (tipo_final) {
                case SEGUNDOS: 
                    resultado = valor * 3600.0;
                    break;
                case MINUTOS: 
                    resultado = valor * 60.0;
                    break;
                case HORAS:
                    resultado = valor;
                    break;
                default:
                    return 0;
            }
            break;
        default:
            return 0;
    }

    return resultado;
}
