/*Faça um programa que leia um número inteiro e exiba em tela seu antecessor e seu sucessor (dica: o
formatador para números inteiros é o %d).*/

#include <stdio.h>
#include <locale.h> //biblioteca para usar setlocale()

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Antecessor: %d \n", num-1); //Exibe diretamente o antecessor
    printf("Sucessor: %d", num+1); //Exibe diretamente o sucessor
    
    return 0;
}