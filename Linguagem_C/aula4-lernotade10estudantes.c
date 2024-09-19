/*Ler as notas de 10 estudantes e imprimir as maiores do que a média*/

#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "Portuguese");
float notas[10], somatorio=0, media;
int i;

for(i=0; i<10; i++){
printf("Digite a nota do estudante %d: ", i);
scanf("%f", &notas[i]); //guarda valor na posição i do vetor notas
somatorio = somatorio + notas[i]; //faz o somatório das notas digitadas
}

media = somatorio/10.0; //tira a média da turma
printf("A média da turma é %0.1f \n", media);

    for(i=0; i<10; i++){
        if(notas[i]>media) //testa se a nota do aluno é maior do que a média
            printf("Nota do aluno %d é %0.1f \n", i, notas[i]);

    }
return 0;
}