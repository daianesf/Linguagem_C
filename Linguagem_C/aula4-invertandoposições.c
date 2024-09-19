/*Copiando dados de um vetor para o outro, invertendo as posições*/

#include <stdio.h>
int main(void){
    char vog1[5] = {‘a’, ‘e’, ‘i’, ‘o’, ‘u’};
    char vogContr[5];
    int i, j;

    for(i=0, j=4; i<5; i++, j--){ //índice i (de 0 a 4), índice j (de 4 a 0).
        vogContr[j] = vog1[i]; //vogContr[4] recebe valor de vog1[0], ...
    }

    printf("O vetor vogContr tem os seguintes elementos: ");
    
    for(i=0; i<5; i++){
        printf("%c ", vogContr[i]);
    }
    return 0;
}