#include <stdio.h>

void cm2_to_m2() {
    double cm2, m2;
    printf("Digite a área em centímetros quadrados: ");
    scanf("%lf", &cm2);
    m2 = cm2 / 10000.0; // 1 m² = 10.000 cm²
    printf("A área em metros quadrados é: %.4lf m²\n", m2);
}

void m2_to_cm2() {
    double m2, cm2;
    printf("Digite a área em metros quadrados: ");
    scanf("%lf", &m2);
    cm2 = m2 * 10000.0;
    printf("A área em centímetros quadrados é: %.2lf cm²\n", cm2);
}

int main() {
    int escolha;
    
    printf("Escolha o tipo de conversão:\n");
    printf("1 - Centímetros quadrados para metros quadrados\n");
    printf("2 - Metros quadrados para centímetros quadrados\n");
    printf("Opção: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            cm2_to_m2();
            break;
        case 2:
            m2_to_cm2();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    
    return 0;
}
