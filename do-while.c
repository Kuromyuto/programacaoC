#include <stdio.h>

int main (){
    int option;

    do{
        printf("SEKIRO SHADOWS DIE TWICE\n");
        printf("1. Iniciar jogo\n");
        printf("2. Opções\n");
        printf("3. Sair\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        printf("Iniciou o jogo\n");
        break;
        case 2:
        printf("Abriu opções\n");
        break;
        case 3:
        printf("Saindo...\n");
        break;
        default:
        printf("Opção invalida\n");
        break;
        }
        
    } while(option != 3);

    return 0;
    
}