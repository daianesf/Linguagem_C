/*Faça um programa que leia a nota final e a frequência de um(a) aluno(a). O programa deve mostrar “Aluno(a)
aprovado(a)” se a nota for maior ou igual a 5 e a frequência for maior ou igual a 75%. Caso contrário, deve
mostrar “Aluno(a) reprovado(a)”. Use o operador lógico && (E) para criar uma condição composta no comando
if.
DICA: se você deseja mostrar o símbolo % em tela, escreva %% dentro das aspas do printf().*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float notafinal, frequencia;
    printf("Digite sua nota final: ");
    scanf("%f", &notafinal);
    printf("Digite sua frequência, em %%: "); // Usar %% para exibir símbolo %
    scanf("%f", &frequencia);

    if(notafinal>=5 && frequencia>=75){
        printf("Aluno(a) aprovado(a). \n");
    }
    else {
        printf("Aluno(a) reprovado(a). \n");
    }
    return 0;
}