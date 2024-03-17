/*Faça um programa que lê os três lados de um
triângulo e determina o seu tipo (equilátero,
isóceles ou escaleno).*/

#include <stdio.h>

int main(){
    int l1, l2, l3;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &l1);
    printf("Digite o valor do lado 1: ");
    scanf("%d", &l2);
    printf("Digite o valor do lado 1: ");
    scanf("%d", &l3);

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