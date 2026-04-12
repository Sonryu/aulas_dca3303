#include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1;
    c = **ppc;
    *pb += 2;
    b = *pb;
    a += 3;
    return a + b + c;
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