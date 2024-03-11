/* Ler uma temperatura em graus Celsius e apresentála em graus Fahrenheit. A fórmula da conversão
F=(9*C+160)/5, sendo F a temperatura em
Fahrenheit e C a temperatura em graus Celsius. */

#include <stdio.h>

int main(){
    int c, f;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%d", &c);

    f=(9*c+160)/5;

    printf("A temperatura em Fahrenheit é igual a: %d", f);

    return 0;

}