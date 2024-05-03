// Faça um programa que receba quatronúmeros inteiros, calcule e mostre a soma desses números


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float nota1 ,nota2 ,nota3 ,nota4 ,mediafinal ,soma;
int main(int argc, char const *argv[])
{
    printf("informe a nota1:\n");
scanf("%f" ,&nota1);
    printf("informe a nota2:\n");
scanf("%f" ,&nota2);
    printf("informe a nota3:\n");
scanf("%f" ,&nota3);
    printf("informe a nota4:\n");
scanf("%f" ,&nota4);
soma = nota1 + nota2 + nota3 + nota4;
mediafinal=(nota1+nota2+nota3+nota4)/4;
printf("sua soma e:%.2f\n",soma);
printf("sua media final e:%.2f\n",mediafinal);
}
