/*– Copiando dados de um vetor para outro*/

#include <stdio.h>

int main(void){
    char vog1[5] = {‘a’, ‘e’, ‘i’, ‘o’, ‘u’};
    char vog2[5];
    int i;

    for(i=0; i<5; i++){ //índice i, assumirá valores de 0 a 4.
        vog2[i] = vog1[i]; //vog2[0] recebe valor de vog1[0], vog2[1] recebe...
    }
    
    printf("O vetor vog2 tem os seguintes elementos: ");
    
    for(i=0; i<5; i++){
        printf("%c ", vog2[i]);
    }

    return 0;
}