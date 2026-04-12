#include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1; // entrando no valor c na main e soamdno 1, sendo assim c da main agr eh 6
    c = **ppc; // c, dessa funcao, esta copiando o c da main atravez desse ponteiro de ponteiro
    *pb += 2; // pb aponta diretamente para c da main e soma 2, difente de ppc ela n precisa passar por outro ponteiro
    b = *pb;
    a += 3; // variavel local somando 3 ao valor inical de 5 que estava sendo apontado
    return a + b + c; //soma dos valores trabalhados
}

// nao sei se eh diferenca entre o GCC e o CLANG, pois eu uso o CLANG, mas ele n ta deixando eu usar o void main()
// pode ter sido alguma configuracao minha aqui no meu PC, pois eu uso 3 PCs (pq eu moro em 3 casas) e cada um ta com um Linux diferente
// nessa questao estou no meu PC Fedora 43, os outros 2 eram Manjaro (Arch) e Debian puro sem DE ou WM, usava direo pelo VIM e compilo pelo CLANG

int main() {
    int c, *b, **a;

    c = 5;
    b = &c;
    a = &b;

    printf("%d\n", f(c, b, a));

   // getchar();
}