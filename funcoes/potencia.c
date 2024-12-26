#include <stdio.h>
// Função para realizar a conversão
double conversao(double valor, int inicio, int final) {
    // Constantes de conversão
    const float W_para_KW = 0.001;         // 1 W = 0.001 kW
    const float W_para_HP = 0.00134102;   // 1 W = 0.00134102 HP
    const float W_para_CV = 0.00135962;   // 1 W = 0.00135962 CV
    float watts = 0;
    double resultado = 0;
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
            printf("Unidade de entrada inválida.\n");
            break;;
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
            printf("Unidade de saída inválida.\n");
            break;;
    }
    return resultado;
    //printf("Resultado: %.6f\n", resultado);
}
// Função principal para conversão de potência
double potencia() {
    int inicio, final;
    double valor, resultado;
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Kilowatts (kW)\n");
    printf("3 - Horsepower (HP)\n");
    printf("4 - Cavalos Vapor (CV)\n");
    printf("Unidade de entrada: ");
    scanf("%d", &inicio);
    printf("Digite o valor: ");
    scanf("%lf", &valor);
    printf("Escolha a unidade de saída:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Kilowatts (kW)\n");
    printf("3 - Horsepower (HP)\n");
    printf("4 - Cavalos Vapor (CV)\n");
    printf("Unidade de saída: ");
    scanf("%d", &final);
    resultado = conversao(valor, inicio, final);
    return resultado;
}