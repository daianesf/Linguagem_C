/*Usando o comando while, faça um programa que leia um número inteiro positivo n_final e imprima todos os
números naturais, de 0 até n_final, em ordem crescente.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int n_final, n_atual=0;

    printf("Digite um número natural: ");
    scanf("%d", &n_final);
    printf("Números naturais de 0 a %d: ", n_final);

    while(n_atual <= n_final){
        printf("%d ", n_atual);
        n_atual++; //Equivale a: n_atual = n_atual + 1;
    }
    return 0;
}