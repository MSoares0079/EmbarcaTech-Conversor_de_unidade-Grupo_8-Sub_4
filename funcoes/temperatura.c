#include <stdio.h>

void paraCelsius(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    float kelvin = celsius + 273.15;

    printf("Celsius para Fahrenheit: %.1f\n", fahrenheit);
    printf("Celsius para Kelvin: %.1f\n", kelvin);
}

void paraFahrenheit(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    float kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

    printf("Fahrenheit para Celsius: %.1f\n", celsius);
    printf("Fahrenheit para Kelvin: %.1f\n", kelvin);
}

void paraKelvin(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;

    printf("Kelvin para Celsius: %.1f\n", celsius);
    printf("Kelvin para Fahrenheit: %.1f\n", fahrenheit);
}

void executarConversao() {
    int escolha;
    float temperatura;

    do {
        printf("\nConversor de temperatura\n");
        printf("Escolha uma opção:\n");
        printf("1 - Converter de Celsius para Fahrenheit e Kelvin\n");
        printf("2 - Converter de Fahrenheit para Celsius e Kelvin\n");
        printf("3 - Converter de Kelvin para Celsius e Fahrenheit\n");
        printf("4 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Informe a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                paraCelsius(temperatura);
                break;

            case 2:
                printf("Informe a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                paraFahrenheit(temperatura);
                break;

            case 3:
                printf("Informe a temperatura em Kelvin: ");
                scanf("%f", &temperatura);
                paraKelvin(temperatura);
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (escolha != 4); 
}

int main() {
    executarConversao();
    return 0;
}
