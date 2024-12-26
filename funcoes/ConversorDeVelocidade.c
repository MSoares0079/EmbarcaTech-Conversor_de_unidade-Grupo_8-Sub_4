#include <stdio.h>
#include <stdlib.h>

void showMenu() {
	printf("Bem-vindo ao Conversor de Velocidade!\n");
	printf("Escolha a unidade de entrada:\n");
	printf("1. km/h (quilômetros por hora)\n");
	printf("2. m/s (metros por segundo)\n");
	printf("3. mph (milhas por hora)\n");
	printf("4. ft/s (pés por segundo)\n");
	printf("Escolha uma opção: ");
}

double convertSpeed(double value, int inputUnit, int outputUnit) {
	// Tabela de conversC#o baseada em km/h como unidade base
	double conversionFactors[] = {1, 0.277778, 0.621371, 0.911344}; // km/h para [km/h, m/s, mph, ft/s]
	double kmhValue = value / conversionFactors[inputUnit - 1];
	return kmhValue * conversionFactors[outputUnit - 1];
}

double velocidade() {
	int inputUnit, outputUnit;
	double value, resultado;
	char continueProgram;

	do {
		showMenu();
		scanf("%d", &inputUnit);

		if (inputUnit < 1 || inputUnit > 4) {
			printf("Unidade de entrada invC!lida.\n");
			continue;
		}

		printf("Digite o valor da velocidade: ");
		scanf("%lf", &value);

		printf("Escolha a unidade de saída:\n");
		printf("1. km/h (quilômetros por hora)\n");
		printf("2. m/s (metros por segundo)\n");
		printf("3. mph (milhas por hora)\n");
		printf("4. ft/s (pés por segundo)\n");
		printf("Escolha uma opção: ");
		scanf("%d", &outputUnit);

		if (outputUnit < 1 || outputUnit > 4) {
			printf("Unidade de saída inválida.\n");
			continue;
		}

		resultado = convertSpeed(value, inputUnit, outputUnit);
		printf("Resultado: %.2lf\n", resultado);

		printf("Deseja fazer outra conversãoo? (S/N): ");
		scanf(" %c", &continueProgram);
	} while (continueProgram == 'S' || continueProgram == 's');

	//printf("Programa encerrado. Obrigado por usar o Conversor de Velocidade!\n");
	return resultado;
}
