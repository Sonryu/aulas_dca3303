#include <stdio.h>

int main (void) {

// p = ++mat;
// x = (*mat);

    // p = mat + 1;
    printf("p = mat + 1; : ");
    printf("[ ");
    printf("\033[32m VALIDA! apontando para o proximo endereço de memoria\033[0m");
    printf("]\n");

   // p = mat++;
      printf("p = mat++ : ");
    printf("[ ");
    printf("\033[31m INVALIDA: mudando a constante do endereço da memoria \033[0m");
    printf("]\n");

    // x = (*mat);

          printf("x = (*mat) : ");
    printf("[ ");
    printf("\033[32m VALIDA! extraindo o conteudo do endereço da memoria \033[0m");
    printf("]\n");
   
    // p = ++mat;
    printf("p = ++mat : ");
    printf("[ ");
    printf("\033[31m INVALIDA: mudando a constante do endereço da memoria \033[0m");
    printf("]\n");

}
