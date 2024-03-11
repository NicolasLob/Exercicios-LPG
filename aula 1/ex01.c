/* Leia três valores para os lados de um triângulo.
O algoritmo deve verificar se o triângulo é
equilátero, isósceles ou escaleno.

a) Equilátero: Todos os lados iguais
b) Isósceles: Dois lados iguais
c) Escaleno: Três lados diferentes

*/

#include <stdio.h>

int main(){

float l1, l2, l3;

printf("Digite o valor do lado 1: \n");
scanf("%f", &l1);
printf("Digite o valor do lado 2: \n");
scanf("%f", &l2);
printf("Digite o valor do lado 3: \n");
scanf("%f", &l3);

if (l1 == l2 && l1 == l3){
    printf("Triangulo Equilatero");
} else if (l1 == l2 || l1 == l3 || l2 == l3){
    printf("Triangulo Isosceles");
} else if (l1 != l2 && l2 != l3 && l1 != l3){
    printf("Triangulo Escaleno");
} else {
    printf("Nao forma um triangulo");
}
return 0;
}