/*DESAFIO: Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
negativo. O programa tem que exibir em tela o maior e o menor número natural lido, sem considerar o número
negativo digitado para parar o loop.
DICA: ao incluir interface limits.h nas diretivas de pré-processamento do seu código-fonte, você terá acesso a
algumas constantes da linguagem C. A constante INT_MAX é igual ao maior valor possível para uma variável
tipo int. A constante INT_MIN é igual ao menor valor possível para uma variável tipo int.*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int num, maior=INT_MIN, menor=INT_MAX;

    printf("Digite números naturais, e um inteiro negativo para parar: ");

    while(num >= 0){
        scanf("%d", &num);

        if(num >= 0){
            if(num > maior)
                maior = num;
        if(num < menor)
            menor = num;
        }
    }
    
    printf("Maior número digitado: %d \n", maior);
    printf("Menor número digitado: %d \n", menor);
    return 0;
}