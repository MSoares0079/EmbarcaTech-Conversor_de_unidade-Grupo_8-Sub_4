#include <stdio.h>

double cm2_to_m2() {
    double cm2, m2;
    printf("Digite a área em centímetros quadrados: ");
    scanf("%lf", &cm2);
    m2 = cm2 / 10000.0; // 1 m² = 10.000 cm²
    return m2;
}

double m2_to_cm2() {
    double m2, cm2;
    printf("Digite a área em metros quadrados: ");
    scanf("%lf", &m2);
    cm2 = m2 * 10000.0;
    return cm2;
}

double area() {
    int escolha;
    double resultado;
    printf("Escolha o tipo de conversão:\n");
    printf("1 - Centímetros quadrados para metros quadrados\n");
    printf("2 - Metros quadrados para centímetros quadrados\n");
    printf("Opção: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            resultado = cm2_to_m2();
            break;
        case 2:
            resultado = m2_to_cm2();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    
    return 0;
}
