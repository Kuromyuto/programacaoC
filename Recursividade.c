#include <stdio.h>

void imprimir(int numero){
    if(numero > 0){
    printf("%d \n", numero);
    imprimir(numero - 1);
    }
}


int main(){

    int quantidade = 10;
    printf("Contagem Regressiva... \n");
    imprimir(quantidade);
    
    return 0;
}