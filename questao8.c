#include <stdio.h>

int main (void) {
int pulo[5];

    printf("*(pulo + 2) : ");
    printf("[ ");
    printf("\033[32m OK \033[0m");
    printf("]\n");

   // *(pulo + 4);
      printf("*(pulo + 4) : ");
    printf("[ ");
    printf("\033[31m ERRADO \033[0m");
    printf("]\n");

    // pulo + 4;
          printf("pulo + 4 : ");
    printf("[ ");
    printf("\033[31m ERRADO \033[0m");
    printf("]\n");
   
    // pulo + 2;
          printf("pulo + 2 : ");
    printf("[ ");
    printf("\033[31m ERRADO \033[0m");
    printf("]\n");



}
