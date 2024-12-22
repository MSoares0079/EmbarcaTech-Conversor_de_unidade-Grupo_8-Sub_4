#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funções/comprimento.c"

void lista_conversao(){//Lista com todos os tipos de conversão de medidas realizadas pelo algoritmo
    printf("Selecione o tipo de conversão, escolha entre:");
    printf("\nComprimento \t(1)");
    printf("\n");    
}

int main(){
    char escolha_conversao[25];//Variavél de escolha de conversão de medida
    int escolha_invalida;//Variavel auxiliar para manter o loop, caso o usuário digite uma conversão inválida
    double valor_convertido;//Resposta do algoritmo de conversão
    do{
        lista_conversao();//É chamado a lista através da função previamente declarada 
        printf("Desejo converter medida de:");
        scanf("%s",escolha_conversao);//Salvo a escolha da conversão em uma string, a escolha pode ser tanto o nome quanto o número associado na lista
        //Convertemos a string para caixa alta para permitir a escolha, mesmo que o usuário escreva tudo maiusculo, tudo minusculo ou apenas a primeira letra maiuscula. 
        strupr(escolha_conversao);
        //Abaixo é reconhecido qual escolha foi realizada e é chamado uma função correspondente, por motivos de objetividade no código, as funções estão armazenados em outra pasta e foram declaradas através do include
        if (strcmp(escolha_conversao,"COMPRIMENTO")==0 || strcmp(escolha_conversao,"1")==0)
        {
            valor_convertido=comprimento();
            escolha_invalida = 0;
        }
        else{
            escolha_invalida =1;//Caso o usuário digite uma conversão fora das planejadas pelo algoritmo, ocorre um erro e retorna o programa do inicio
            system("cls");
            printf("\nConversão inválida\n");            
        }
    }while(escolha_invalida);
    printf("O valor convertido é: %.2lf\n", valor_convertido);//Retorna o valor convertido para o usuário
    system("pause");
    return 0;
}