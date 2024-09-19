#include <stdio.h>
#include <locale.h> //biblioteca para usar setlocale()
/*Cálculo da média da UNIP*/

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float np1, np2, pim, ms;
    
    printf("Digite a nota da sua prova NP1: ");
    scanf("%f", &np1);
    printf("Digite a nota da sua prova NP2: ");
    scanf("%f", &np2);
    printf("Digite a nota do PIM: ");
    scanf("%f", &pim);
    ms = (4*np1 + 4*np2 + 2*pim)/10;
    printf("Sua média do semestre é %f", ms);
    return 0;
}
