#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero (Negativo para sair)\n");
    scanf("%d", &num);

    while(num >= 0){
        printf("o numero que você digitou foi: %d", num);

        printf("Digite um numero (negativo para sair)\n");
        scanf("%d", &num);
    }

    printf("Numero negativo detectado, saindo...");
    

    return 0;
}