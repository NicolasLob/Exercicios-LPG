/* Ler dois números inteiros. Multiplicar o primeiro
por 4 e o segundo por 0,6. Calcular a média
aritmética dos resultados obtidos. Imprimir os
valores lidos, os calculados e a média aritmética. */

#include <stdio.h>

int main(){
    int n1, n2, multiplicacao1, multiplicacao2;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    multiplicacao1 = n1 * 4;
    multiplicacao2 = n2 * 0.6;
    media = (multiplicacao1 + multiplicacao2) / 2.00;

    printf("A multiplicacao do primeiro numero por 4 e: %d \n", multiplicacao1);
    printf("A multiplicacao do primeiro numero por 0,6 e: %d \n", multiplicacao2);
    printf("A media dos resultados obtidos e: %.2f \n", media);


    return 0;



}