#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float valor;
    char estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    fflush(stdin); //Limpa o buffer do teclado
    printf("Digite o estado ('m' p/ MG, 's' p/ SP, 'r' p/ RJ e 'k' p/ MS): ");
    estado = getchar(); //Recebe um caractere e armazena seu ASCII em estado

    switch(estado){
        case 'm':
            printf("Valor acrescido de imposto para MG é %0.2f \n", valor*1.07);
            break;
        case 's':
            printf("Valor acrescido de imposto para SP é %0.2f \n", valor*1.12);
            break;
        case 'r':
            printf("Valor acrescido de imposto para RJ é %0.2f \n", valor*1.15);
            break;
        case 'k':
            printf("Valor acrescido de imposto para MS é %0.2f \n", valor*1.08);
            break;
        default:
            printf("O estado digitado não é válido.\n");

        }
    return 0;
}