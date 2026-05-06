#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao){
        case1:
        srand(time(0));
        numeroSecreto = rand() %10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        if(numeroSecreto == palpite){
        printf("voce acertou!\n");
        printf("Numero secreto %d\n", numeroSecreto);
        } else {
        printf("você errou!\n");
        printf("Numero secreto %d\n", numeroSecreto);
        }
        break;

        case2:
        printf("Explicação das regras");
        printf("Digite a opção relacionada as regras do jogo\n");
        scanf("%d", &regras);
        switch (regras){
        }
        break;
        case3:
        printf("Saindo do jogo!\n");
        break;
        default:
        printf("Opção invalida");
        break;
    }

}


