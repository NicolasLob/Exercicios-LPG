/* •Ler dois números quaisquer, calcular a soma,
mostrar os números lidos e o resultado da soma. */

#include <stdio.h>

int main(){
    int n1, n2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma de %d + %d e de: %d", n1, n2, soma);

    return 0;



}