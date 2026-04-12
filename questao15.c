#include <stdio.h>
int main(){
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},

    {7, 8, 9}, {10, 11, 12}};


    //novamente, devido o CLANG, vou precisar mudar esse %u por warnings, ele n deixa eu comppiar. vou mudar para %p
    printf("%p, %p, %p\n", x+3, *(x+3), *(x+2)+3);

    printf("x+3 : ");
    printf("[ ");
    printf("\033[32m Percorrendo as linhas da matriz. nesse caso, aponta para a linha 4 da matriz. \033[0m");
    printf("]\n");


    printf("*(x+3) : ");
    printf("[ ");
    printf("\033[32m Percorrendo os elementos da linha 4, esta apontando para elemento 10, inicio da linha 4. \033[0m");
    printf("]\n");


    printf("*(x+2)+3) : ");
    printf("[ ");
    printf("\033[32m Percorrendo os elementos da linha 3, esta apontando para elemento 7. mas, vai percorrer +3 elementos e termina na linha 4 e no elemento 10, inicio da linha 4.. \033[0m");
    printf("]\n");
}
