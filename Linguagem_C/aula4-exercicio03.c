/*Faça um programa que receba do teclado dois arrays, A e B, com 5 números inteiros cada. Crie um novo array
C calculando C = A – B. Mostre na tela os dados do array C.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int i, A[5], B[5], C[5];

    printf("Digite 5 números inteiros do vetor A: ");
    
    for(i=0; i<5; i++)
        scanf("%d", &A[i]);
        printf("Digite 5 números inteiros do vetor B: ");
    5
    for(i=0; i<5; i++)
        scanf("%d", &B[i]);
        printf("Valores do vetor C = A - B: ");
    
    for (i=0; i<5; i++) {
        C[i] = A[i]-B[i];
        printf("%d ", C[i]);
    }

    return 0;
}