/*Faça um algoritmo que leia dois valores, N e X. Mostre
na tela os números de 1 a N e, a cada múltiplo de X,
emita uma mensagem: “Múltiplo de X”.*/

#include <stdio.h>

int main(){
    int n, x;

    printf("Insira o valor numero N: ");
    scanf("%d", &n);
    printf("Insira o valor numero X: ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++) 
    {
        printf("%d \n", i);

        if (i % x == 0)
        {
            printf("Multiplo de %d\n", x);
        } 
        
    }
    
    return 0;

}