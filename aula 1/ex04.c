/* Faça um algoritmo para calcular a somatória, a soma
dos quadrados e a média dos N primeiros números
naturais.
– Exemplo: N=3
• Soma: 1 + 2 + 3 = 6
• Soma dos quadrados: 12 + 22 + 32 = 14
• Média: Soma / N = 2 */

#include <stdio.h>

int main(){
    int n, soma = 0, sdq = 0;
    float media;

    printf("Digite um número: ");
    scanf("%d", &n);

    

    for (int i = 1; i <= n; i++)
    {
        soma = soma + i;
        sdq = sdq + i * i;
        media = soma / n;
    } 
    printf("Soma: %d \n", soma);
    printf("Soma dos quadrados: %d \n", sdq);
    printf("Media: %f", media);



    return 0;
}