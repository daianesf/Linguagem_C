/* Faça um programa que solicite o valor da temperatura de um equipamento, em °C. A faixa normal de operação
desse equipamento vai de 0 a 30°C. Se o valor de temperatura se encontrar fora dessa faixa, mostre a
mensagem “Alerta: temperatura fora da faixa permitida!” Caso contrário, mostre a mensagem “Temperatura
normal.” Use o operador lógico || (OU) para criar uma condição composta no comando if.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float temperatura;

    printf("Digite a temperatura do equipamento, em °C: ");
    scanf("%f", &temperatura);

    if(temperatura<0 || temperatura>30){
        printf("Alerta: temperatura fora da faixa permitida! \n");
    }
    else {
        printf("Temperatura normal. \n");
    }
    return 0;
}