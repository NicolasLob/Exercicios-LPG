/*.Utilize uma função que recebe os três lados e
retorna o tipo de triângulo. A função poderia ser,
por exemplo:
int tipo_triangulo(float x, float y, float z);
// 1 - equilátero, 2 - isóceles ou 3 - escaleno*/

#include <stdio.h>

int lado_tri(float x, float y, float z);


int main(){
    float l1, l2, l3, resultado;

    printf("Digite o valor do lado 1: ");
    scanf("%f", &l1);
    printf("Digite o valor do lado 2: ");
    scanf("%f", &l2);
    printf("Digite o valor do lado 3: ");
    scanf("%f", &l3);

    resultado = lado_tri(l1, l2, l3);

return 0;
    
}


int lado_tri(float x, float y, float z){
    if (x == y && x == z){
    printf("Triangulo Equilatero");
} else if (x == y || x == z || y == z){
    printf("Triangulo Isosceles");
} else if (x != y && y != z && x != z){
    printf("Triangulo Escaleno");
} else {
    printf("Nao forma um triangulo");
}
}