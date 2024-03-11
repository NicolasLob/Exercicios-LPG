/*•Faça um programa para ler dois valores para as
variáveis A e B, efetuando a troca dos valores de
forma que a variável A passe a possuir o valor da
variável B e a variável B passe a possuir o valor da A*/

#include <stdio.h>

int main(){
    int a, b, troca;

    printf("Digite o valor A: ");
    scanf("%d", &a);
    printf("Digite o valor B: ");
    scanf("%d", &b);

    printf("O valor A é: %d \n O valor B é: %d \n", a, b);

    troca = a;
    a = b;
    b = troca;

    printf("Os valores trocados ficam da seguinte forma: \n");
    printf("A: %d \n", a);
    printf("B: % d \n", b);
    return 0;

}