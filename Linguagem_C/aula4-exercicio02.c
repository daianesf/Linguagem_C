/*Escreva um programa que leia do teclado 10 valores inteiros, que devem ser armazenados em um vetor.
Depois, escreva na tela quantas posições desse vetor armazenaram números pares.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int i, par=0, inteiros[10];

    printf("Digite 10 números inteiros: ");
    
    for(i=0; i<10; i++) {
        scanf("%d", &inteiros[i]);
        if(inteiros[i]%2 == 0)
            par++;
    }
    
    printf("Número de posições armazenando um valor par: %d.\n", par);
    return 0;
}