/*Programa que lê dois números inteiros e
mostre qual deles é o maior. Se forem iguais, mostra
a mensagem "Números iguais".*/

#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

        if(num1>num2){
        printf("%d é maior do que %d", num1, num2);
        }
        else {
            if(num1==num2){
                printf("Números iguais.");
            }
            else {
                printf("%d é maior do que %d", num2, num1);
            }
        }
    return 0;
}