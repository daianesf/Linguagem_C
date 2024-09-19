/*Usando o comando while, faça um programa que leia um número inteiro positivo n_final e imprima todos os
números naturais, de n_final até 0, em ordem decrescente.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int n_final;

    printf("Digite um número natural: ");
    scanf("%d", &n_final);
    printf("Números naturais de %d a 0: ", n_final);

    while(n_final>=0){
        printf("%d ", n_final);
        n_final--; //Equivale a: n_final = n_final - 1;
    }
    return 0;
    }