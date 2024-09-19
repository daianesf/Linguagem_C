/*Faça um programa que peça para o usuário digitar um caractere e que, em seguida, exiba o código ASCII desse
caractere (dica: isso foi comentado nos slides da Aula 02, e o formatador para caracteres é o %c).*/

#include <stdio.h>
#include <locale.h> //biblioteca para usar setlocale()

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    char car; //Tanto char quanto int funcionam

    printf("Digite um único caractere: ");
    scanf("%c", &car); //Lê o caractere e armazena seu código ASCII em car
    printf("Caractere digitado: %c \n", car); //Exibe o conteúdo de car, como caractere (símbolo)
    printf("Código ASCII: %d \n", car); //Exibe o conteúdo de car, mas como inteiro (código ASCII)
    
    return 0;
}