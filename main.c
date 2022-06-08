#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int valor1=4, valor2=10,total,q;

    FILE *arq;
    arq=fopen("dados.txt","w");


    total=soma(valor1,valor2);
    printf("Total da soma = %d\n",total);
    printf("Quadrado do valor1 = %d\n",quadrado(valor1));
    q=quadrado(valor1);
    printf("Salvando em arquivo...\n");
    fprintf(arq,"Valor da Soma = %d\n",total);
    fprintf(arq,"Valor do Quadrado = %d\n",q);

    return 0;
}
