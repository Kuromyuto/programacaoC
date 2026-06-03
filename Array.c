#include <stdio.h>

int main(){

    char *nomes[] = {"Alice", "Bob", "Carol"};

    for(int i = 0; i < 3; i++){
        printf("%s \n", nomes[i]);
    }

    // char letras[4] = {'A', 'B', 'C', 'D'}; // Array de Letras

    // printf("Primeira letra %c \n", letras[0]);
    // printf("Segunda letra %c \n", letras[1]);
    // printf("Terceira letra %c \n", letras[2]);
    // printf("Quarta letra %c \n", letras[3]);
     
    // float notas[3] = {85.5, 90.0, 70.3}; // Array de Notas

    // printf("Nota do aluno 1 é: %.1f \n", notas[0]);
    // printf("Nota do aluno 2 é: %.1f \n", notas[1]);
    // printf("Nota do aluno 3 é: %.1f \n", notas[2]);

    return 0;
}