/* Usando um laço for, faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem “FIM!” após a contagem.
DICA: se você quiser adicionar uma pausa entre uma exibição e outra, use a função sleep(), acessada pela
interface time.h. O argumento entre parênteses se refere ao tempo, em segundos, de pausa para a execução
do próximo comando. Por exemplo, sleep(1) faz com que o programa pause por 1 segundo. Em alguns sistemas,
a função sleep funciona com o tempo dado em milissegundos. Salve seu arquivo de código-fonte com extensão
.c, pois a interface time.h nem sempre funciona com extensão .cpp.*/

#include <stdio.h>
#include <time.h>

int main(void){
    int i;

    for(i=10; i>=0; i--) {
        printf("%d\n", i);
        sleep(1);
    }
    
    printf("FIM!\n");
    return 0;
}