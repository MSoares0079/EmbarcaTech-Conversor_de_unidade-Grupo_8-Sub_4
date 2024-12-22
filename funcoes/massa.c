#include <stdlib.h>
#include <stdio.h>

void kgtog();
void kgtoT();
void gtoKg();
void gtoT();
void TtoKg();
void Ttog();
void menu();

int main(){

    while (1){
        menu();
    }
    return 0;
}

void menu (){
int opc;

system("cls");
printf("\nEscolha entre os servicos abaixo: \n\n");
printf("1. Converter Kg para g. \n");
printf("2. Converter Kg para Tonelada. \n");
printf("3. Converter g para Kg. \n");
printf("4. Converter g para Tonelada. \n");
printf("5. Converter Tonelada para Kg. \n");
printf("6. Converter Tonelada para g. \n");
printf("0. Sair da conversao.\n\n");
printf("Qual numero corresponde ao servico desejado: ");
scanf("%d", &opc);

switch (opc){
    case 1: kgtog();
    system("pause");
      break;
    case 2: kgtoT();
    system("pause");
      break;
    case 3: gtoKg();
    system("pause");
      break;
    case 4: gtoT();
    system("pause");
      break;
    case 5: TtoKg();
    system("pause");
      break; 
    case 6: Ttog();
    system("pause");
      break;
    case 0:
    printf("Encerrando o programa...");
      exit(0);
    default:
      printf("Opcao invalida, tente novamente!\n\n");
      system("pause");
      break;
}
}

void kgtog (){
float n1,calculo;
printf("Digite a quantidade de Kg: ");
scanf("%f", &n1 );
calculo = n1*1000;
printf("%.2f Kg equivale a: %.2f g\n", n1, calculo);
}

void kgtoT (){
float n1,calculo;
printf("Digite a quantidade de Kg: ");
scanf("%f", &n1 );
calculo = n1/1000;
printf("%.2f Kg equivale a: %.2f T\n", n1, calculo);
}

void gtoKg (){
float n1,calculo;
printf("Digite a quantidade de gramas: ");
scanf("%f", &n1 );
calculo = n1/1000;
printf("%.2f g equivale a: %.2f Kg\n", n1, calculo);
}

void gtoT (){
float n1,calculo;
printf("Digite a quantidade de gramas: ");
scanf("%f", &n1 );
calculo = n1/1000000;
printf("%.2f g equivale a: %.2f T\n", n1, calculo);
}

void TtoKg (){
float n1,calculo;
printf("Digite a quantidade de Toneladas: ");
scanf("%f", &n1 );
calculo = n1*1000;
printf("%.2f T equivale a: %.2f Kg\n", n1, calculo);
}

void Ttog (){
float n1,calculo;
printf("Digite a quantidade de Toneladas: ");
scanf("%f", &n1 );
calculo = n1*1000000;
printf("%.2f T equivale a: %.2f g\n", n1, calculo);
}
