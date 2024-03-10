/*Leia o nome e o sexo de uma pessoa,
apresentando como saída uma das seguintes
mensagens: “Ilmo. Sr.”, para o sexo masculino,
ou a mensagem “Ilma. Sra.”, para o sexo
feminino, seguida do seu nome. */

#include <stdio.h>
int main(){
    char nome[20];
    int sexo;

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    printf("Digite o seu sexo (1- M / 2- F): \n");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        printf("Ilmo. Sr. %s", nome);
    }else if (sexo == 2){
        printf("Ilma. Sra. %s", nome);
    } else {
        printf("Invalido.");
    }
    return 0;

}