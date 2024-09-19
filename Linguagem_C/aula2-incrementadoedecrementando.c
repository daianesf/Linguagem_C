#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int incr=5, decr=5;

    //incrementando
    printf("Valor inicial de incr: %d \n", incr);
    incr = incr+1;
    printf("Valor de incr após comando incr = incr+1: %d \n", incr);
    incr++;
    printf("Valor de incr após comando incr++: %d \n", incr);
    
    //decrementando
    printf("Valor inicial de decr: %d \n", decr);
    decr = decr-1;
    printf("Valor de decr após comando decr = decr-1: %d \n", decr);
    decr--;
    printf("Valor de decr após comando decr--: %d \n", decr);
    return 0;
}