/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. O programa
deve mostrar em tela a taxa percentual que a prestação representa em relação ao salário.
Além disso, se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
DICA: o formatador %0.1f mostra o valor de uma variável float com 1 casa decimal. O formatador %0.2f mostra
o valor de uma variável float com 2 casas decimais, e assim por diante.*/

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float salario, prestacao, percent;

    printf("Digite o seu salário, em R$: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação, em R$: ");
    scanf("%f", &prestacao);
    percent = (prestacao/salario)*100;
    printf("Prestação representa %0.1f%% do salário. ", percent); //%0.1f mostra float com 1 casa decimal.

    if(percent>20){
        printf("Empréstimo não concedido.");
    }
    else {
        printf("Empréstimo concedido.");
    }
    return 0;
}