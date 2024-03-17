/*Faça um programa que lê 10 valores e os
armazena em um vetor (float). Em seguida,
mostre na tela:
– O maior valor;
– A média dos valores;
– Quais valores estão acima da média.*/

#include <stdio.h>

int main(){
    float valores[3], maior, somaM, media, acima;
    int i;
    
    for(i = 0; i < 3; i++){
        printf("Digite o valor: \n");
        scanf("%f", &valores[i]);
        somaM += valores[i];
    }
    
    media = somaM / 3;
    
    maior = valores[0];
    
    for(i = 0; i < 3; i++){
        if(valores[i] > maior){
            maior = valores[i];
            
        }
    }
    
    for(i = 0; i < 3; i++){
        if(valores[i] > media){
           printf("Valores acima da media: %f\n", valores[i]);
            
        }
    }
    
    printf("Maior valor: %f\n", maior);
    printf("Media: %f\n", media);
    return 0;
}