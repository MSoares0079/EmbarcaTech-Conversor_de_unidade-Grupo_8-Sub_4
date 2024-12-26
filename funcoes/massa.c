#include <stdlib.h>
#include <stdio.h>

double kgtog();
double kgtoT();
double gtoKg();
double gtoT();
double TtoKg();
double Ttog();

double massa(){
  int opc;
  double resultado;
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
    case 1: resultado = kgtog();
      break;
    case 2:  resultado = kgtoT();
      break;
    case 3:  resultado = gtoKg();
      break;
    case 4:  resultado = gtoT();
      break;
    case 5:  resultado = TtoKg();
      break; 
    case 6:  resultado = Ttog();
      break;
    case 0:
    printf("Encerrando o programa...");
      exit(0);
    default:
      printf("Opcao invalida, tente novamente!\n\n");
      system("pause");
      break;
  }
  return resultado;
}

double kgtog (){
  double n1,calculo;
  printf("Digite a quantidade de Kg: ");
  scanf("%lf", &n1 );
  calculo = n1*1000;
  return calculo;
  //printf("%.2f Kg equivale a: %.2f g\n", n1, calculo);
}

double kgtoT (){
  double n1,calculo;
  printf("Digite a quantidade de Kg: ");
  scanf("%lf", &n1 );
  calculo = n1/1000;
  return calculo;
  //printf("%.2f Kg equivale a: %.2f T\n", n1, calculo);
}

double gtoKg (){
  double n1,calculo;
  printf("Digite a quantidade de gramas: ");
  scanf("%lf", &n1 );
  calculo = n1/1000;
  return calculo;
  //printf("%.2f g equivale a: %.2f Kg\n", n1, calculo);
}

double gtoT (){
  double n1,calculo;
  printf("Digite a quantidade de gramas: ");
  scanf("%lf", &n1 );
  calculo = n1/1000000;
  return calculo;
  //printf("%.2f g equivale a: %.2f T\n", n1, calculo);
}

double TtoKg (){
  double n1,calculo;
  printf("Digite a quantidade de Toneladas: ");
  scanf("%lf", &n1 );
  calculo = n1*1000;
  return calculo;
  //printf("%.2f T equivale a: %.2f Kg\n", n1, calculo);
}

double Ttog (){
  double n1,calculo;
  printf("Digite a quantidade de Toneladas: ");
  scanf("%lf", &n1 );
  calculo = n1*1000000;
  return calculo;
  //printf("%.2f T equivale a: %.2f g\n", n1, calculo);
}
