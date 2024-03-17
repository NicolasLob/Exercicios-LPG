/* Dados N e K, mostre na tela os N primos a partir de
K. Por exemplo:
– Entrada: N = 5 e K = 10
– Saída: 11, 13, 17, 19, 23 */

#include <stdio.h>

int main(){
    int N, K, i, j, cont;

    printf("Digite o valor N: ");
    scanf("%d", &N);
    printf("Digite o valor K: ");
    scanf("%d", &K);

    printf("Os %d numeros primos a partir de %d sao: ", N, K);

    for (i = K, cont= 0; cont < N; i++)
    {
        int eh_primo = 1;
        if(i <= 1)
        {
             eh_primo = 0; // Números menos ou iguais  a 1 não são primos
        } else 
        { 
        for (j = 2; j * j <= i; j++)
        {
            if(i % j == 0){
            eh_primo = 0;
            break;}
        }
    }
        
        if (eh_primo)
        {
            printf("%d ", i);
            cont++;
        }
        
    }
    
    return 0;

}