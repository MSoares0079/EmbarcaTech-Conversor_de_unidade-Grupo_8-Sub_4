#include <stdio.h>

// Função para realizar a conversão
float conversao(float valor, int inicio, int final) {
    // Constantes de conversão
    const float W_para_KW = 0.001;         // 1 W = 0.001 kW
    const float W_para_HP = 0.00134102;   // 1 W = 0.00134102 HP
    const float W_para_CV = 0.00135962;   // 1 W = 0.00135962 CV

    float watts = 0;
    float resultado = 0;

    // Converter a unidade de entrada para Watts
    switch (inicio) {
        case 1: // Watts
            watts = valor;
            break;
        case 2: // Kilowatts
            watts = valor / W_para_KW;
            break;
        case 3: // Horsepower (HP)
            watts = valor / W_para_HP;
            break;
        case 4: // Cavalos Vapor (CV)
            watts = valor / W_para_CV;
            break;
        default:
            return -1; // Indica erro na unidade de entrada
    }

    // Converter de Watts para a unidade de saída
    switch (final) {
        case 1: // Watts
            resultado = watts;
            break;
        case 2: // Kilowatts
            resultado = watts * W_para_KW;
            break;
        case 3: // Horsepower (HP)
            resultado = watts * W_para_HP;
            break;
        case 4: // Cavalos Vapor (CV)
            resultado = watts * W_para_CV;
            break;
        default:
            return -1; // Indica erro na unidade de saída
    }

    return resultado;
}

// Função principal de conversão de potência
void converterpotencia(float *valorConvertido, float valor, int inicio, int final) {
    *valorConvertido = conversao(valor, inicio, final);
}
