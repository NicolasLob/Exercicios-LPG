/*Faça experimentos com a versão otimizada da Série
de Taylor e monte uma tabela relacionando a
precisão (quantas casas decimais após a vírgula) e o
valor de n.
– Por exemplo, para 2 casas decimais, qual deve ser o valor
de n?
– Faça testes com pelo menos 2 casas decimais e vá
aumentando aos poucos.*/

#include <stdio.h>

int main(){
    float x;
int n, i, j;
printf("Digite x e a quantidade de termos n: ");
scanf("%f%d", &x, &n);
float e_x = 0; // inicializa somatório com zero
for( i = 0 ; i <= n ; i++ ){ // gera os termos da série
float pot = 1;
int fat = 1;
for( j = 1 ; j <= i ; j++ ){ // potenciação e fatorial
pot = pot * x;
fat = fat * j;
}
e_x = e_x + pot / fat; // Acumula termo no somatório
}
printf("e elevado a %.3f = %.8f\n", x, e_x);
}