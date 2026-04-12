#include <stdio.h>

void funcao(char **p){

    char *t;

    t = (p += sizeof(int))[-1]; // *a esta caminhado 4 posições indo para a[3] = 'ij';
                                // logo em seguida recua -1, insdo para a[2] = 'gh'

    printf("%s\n", t);
}

int main(){

    char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};

    funcao(a);

    return 0;

}