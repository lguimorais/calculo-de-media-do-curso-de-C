// Faça um programa que receba quatronúmeros inteiros, calcule e mostre a soma desses números
#include <stdlib.h>
#include <stdio.h>

// Função principal do programa
int main(int argc, char const *argv[])
{
    // Declaração das variáveis de notas e média final
    float nota1, nota2, nota3, nota4, mediafinal;

    // Solicitação e leitura da nota 1
    printf("Informe a nota 1:\n");
    scanf("%f", &nota1);

    // Solicitação e leitura da nota 2
    printf("Informe a nota 2:\n");
    scanf("%f", &nota2);

    // Solicitação e leitura da nota 3
    printf("Informe a nota 3:\n");
    scanf("%f", &nota3);

    // Solicitação e leitura da nota 4
    printf("Informe a nota 4:\n");
    scanf("%f", &nota4);

    // Cálculo da média final
    mediafinal = (nota1 + nota2 + nota3 + nota4) / 4;

    // Exibição da média final com duas casas decimais
    printf("Sua média final é: %.2f\n", mediafinal);

    // Indicação de término bem-sucedido do programa
    return 0;
}
