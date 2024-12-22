#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void lista_conversao_comprimento(){
    printf("\nEscolha entre:");
    printf("\nMetro \t(1)");
    printf("\nCentimetro \t(2)");
    printf("\nMilimetro \t(3)");
    printf("\n");    
}
int escolha_comprimento(char escolha[25]){
    if (strcmp(escolha,"METRO")==0 || strcmp(escolha,"1")==0)
    {
        return 0;        
    }
    else if (strcmp(escolha,"CENTIMETRO")==0 || strcmp(escolha,"2")==0)
    {
        return -2;
    }
    else if (strcmp(escolha,"MILIMETRO")==0 || strcmp(escolha,"3")==0)
    {
        return -3;
    }
    else{ 
        printf("\nConversão inválida");
        return -1;
    }
}

double comprimento(){
    char escolha_de[25];
    int escolha_invalida, de, para;
    double valor_para_converter;
    printf("Qual a medida a ser convertida:");
    scanf("%lf", &valor_para_converter);
    do{
        printf("\nConvertendo de:");
        lista_conversao_comprimento();
        scanf("%s",escolha_de); 
        strupr(escolha_de);
        de = escolha_comprimento(escolha_de);
        if (de == -1)
            escolha_invalida = 1;
        else
            escolha_invalida = 0;
    }while(escolha_invalida);
    do{
        printf("\nConvertendo para:");
        lista_conversao_comprimento();
        scanf("%s",escolha_de); 
        strupr(escolha_de);
        para = escolha_comprimento(escolha_de);
        if (para == -1) 
            escolha_invalida = 1;
        else
            escolha_invalida = 0;
    }while(escolha_invalida);    
    return valor_para_converter*pow(10,de-para);
}