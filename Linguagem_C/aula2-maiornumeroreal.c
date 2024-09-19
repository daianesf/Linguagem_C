/*Programa que lê dois números reais e
mostre qual deles é o maior.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;

    printf("Digite dois números reais distintos: ");
    scanf("%f %f", &num1, &num2);

    if(num1>num2){
        printf("%f é maior do que %f", num1, num2);
    }
    else {
        printf("%f é maior do que %f", num2, num1);
    }
    return 0;
}