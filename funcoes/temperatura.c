#include <stdio.h>

float celsiusToFahrenheit(){
    float celsius, fahrenheit;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

float celsiusToKelvin(){
    float celsius, kelvin;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    return kelvin;
}

float fahrenheitToCelsius(){
    float fahrenheit, celsius;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

float fahrenheitToKelvin(){
    float fahrenheit, kelvin;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
    return kelvin;
}

float kelvinToCelsius(){
    float kelvin, celsius;
    printf("Informe a temperatura em Kelvin: ");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    return celsius;
}

float kelvinToFahrenheit(){
    float kelvin, fahrenheit;
    printf("Informe a temperatura em Kelvin: ");
    scanf("%f", &kelvin);
    fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    return fahrenheit;
}

float executarConversao() {
    int escolha;
    float resultado;

    do {
        printf("\nConversor de temperatura\n");
        printf("Escolha uma opção:\n");
        printf("1 - Converter de Celsius para Fahrenheit\n");
        printf("2 - Converter de Celsius para Kelvin\n");
        printf("3 - Converter de Fahrenheit para Celsius\n");
        printf("4 - Converter de Fahrenheit para Kelvin\n");
        printf("5 - Converter de Kelvin para Celsius\n");
        printf("6 - Converter de Kelvin para Fahrenheit\n");
        printf("7 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                resultado = celsiusToFahrenheit();
                break;

            case 2:
                resultado = celsiusToKelvin();
                break;

            case 3:
                resultado = fahrenheitToCelsius();
                break;

            case 4:
                resultado = fahrenheitToKelvin();
                break;
            
            case 5:
                resultado = kelvinToCelsius();
                break;

            case 6:
                resultado = kelvinToFahrenheit();
                break;

            case 7:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (escolha != 7); 

    return 0;

}