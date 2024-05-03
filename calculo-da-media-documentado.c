#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declaração das variáveis para as notas e para a soma e média
    float nota1, nota2, nota3, nota4;
    float soma, media;

    // Solicitação e leitura das quatro notas
    printf("Informe a nota 1:\n");
    scanf("%f", &nota1);

    printf("Informe a nota 2:\n");
    scanf("%f", &nota2);

    printf("Informe a nota 3:\n");
    scanf("%f", &nota3);

    printf("Informe a nota 4:\n");
    scanf("%f", &nota4);

    // Cálculo da soma das notas
    soma = nota1 + nota2 + nota3 + nota4;

    // Cálculo da média das notas
    media = soma / 4;

    // Exibição da soma e média
    printf("A soma das notas é: %.2f\n", soma);
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
