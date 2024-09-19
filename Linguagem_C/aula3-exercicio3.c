/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O
programa tem que exibir em tela o maior e o menor número lido, incluindo o número negativo.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int num, maior=0, menor=0;
    printf("Digite números inteiros: ");

    while(num >= 0){
        scanf("%d", &num);

        if(num > maior)
            maior = num;
        else
            if(num < menor)
            menor = num;
    }
    
    printf("O maior número é %d.\n", maior);
    printf("O menor número é %d.\n", menor);
    return 0;
}