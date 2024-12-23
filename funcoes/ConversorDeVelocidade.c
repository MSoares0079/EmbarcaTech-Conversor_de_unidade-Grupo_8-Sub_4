#include <stdio.h>
#include <stdlib.h>

void showMenu() {
	printf("Bem-vindo ao Conversor de Velocidade!\n");
	printf("Escolha a unidade de entrada:\n");
	printf("1. km/h (quilC4metros por hora)\n");
	printf("2. m/s (metros por segundo)\n");
	printf("3. mph (milhas por hora)\n");
	printf("4. ft/s (pC)s por segundo)\n");
	printf("Escolha uma opC'C#o: ");
}

double convertSpeed(double value, int inputUnit, int outputUnit) {
	// Tabela de conversC#o baseada em km/h como unidade base
	double conversionFactors[] = {1, 0.277778, 0.621371, 0.911344}; // km/h para [km/h, m/s, mph, ft/s]
	double kmhValue = value / conversionFactors[inputUnit - 1];
	return kmhValue * conversionFactors[outputUnit - 1];
}

int main() {
	int inputUnit, outputUnit;
	double value, result;
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

		printf("Escolha a unidade de saC-da:\n");
		printf("1. km/h (quilC4metros por hora)\n");
		printf("2. m/s (metros por segundo)\n");
		printf("3. mph (milhas por hora)\n");
		printf("4. ft/s (pC)s por segundo)\n");
		printf("Escolha uma opC'C#o: ");
		scanf("%d", &outputUnit);

		if (outputUnit < 1 || outputUnit > 4) {
			printf("Unidade de saC-da invC!lida.\n");
			continue;
		}

		result = convertSpeed(value, inputUnit, outputUnit);
		printf("Resultado: %.2lf\n", result);

		printf("Deseja fazer outra conversC#o? (S/N): ");
		scanf(" %c", &continueProgram);
	} while (continueProgram == 'S' || continueProgram == 's');

	printf("Programa encerrado. Obrigado por usar o Conversor de Velocidade!\n");
	return 0;
}
