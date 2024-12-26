#include <stdlib.h>
#include <stdio.h>

void menu();
double kgtog();
double kgtoT();
double gtoKg();
double gtoT();
double TtoKg();
double Ttog();


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
    case 1: 
    printf("Resultado: %.2f g\n", kgtog());
    system("pause");
      break;
    case 2: 
    printf("Resultado: %.2f T\n", kgtoT());
    system("pause");
      break;
    case 3: 
    printf("Resultado: %.2f Kg\n", gtoKg());
    system("pause");
      break;
    case 4: 
    printf("Resultado: %.2f T\n", gtoT());
    system("pause");
      break;
    case 5: 
    printf("Resultado: %.2f Kg\n", TtoKg());
    system("pause");
      break; 
    case 6: 
    printf("Resultado: %.2f g\n", Ttog());
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

double kgtog (){
float n1,calculo;
printf("Digite a quantidade de Kg: ");
scanf("%f", &n1 );
calculo = n1*1000;
return calculo;
}

double kgtoT (){
float n1,calculo;
printf("Digite a quantidade de Kg: ");
scanf("%f", &n1 );
calculo = n1/1000;
return calculo;
}

double gtoKg (){
float n1,calculo;
printf("Digite a quantidade de gramas: ");
scanf("%f", &n1 );
calculo = n1/1000;
return calculo;
}

double gtoT (){
float n1,calculo;
printf("Digite a quantidade de gramas: ");
scanf("%f", &n1 );
calculo = n1/1000000;
return calculo;
}

double TtoKg (){
float n1,calculo;
printf("Digite a quantidade de Toneladas: ");
scanf("%f", &n1 );
calculo = n1*1000;
return calculo;
}

double Ttog (){
float n1,calculo;
printf("Digite a quantidade de Toneladas: ");
scanf("%f", &n1 );
calculo = n1*1000000;
return calculo;
}
