#include <stdio.h> // biblioteca

//função simples para operações:

int soma(int a, int b){
     return a + b;
}

int subtracao(int a, int b){
     return a - b;
}

int main() {
    // declarando ponteiro para função
    
    int (*operacao)(int, int); // ele aponta para funções que retornam int e recebem dois ints

    int x = 10, y = 5; //valores a serem usados no exemplo

    //apontando para a função soma
    operacao = soma; // atribui o endereco de soma ao ponteiro operacao
    printf("Resultado da Soma: %d\n", operacao(x, y)); //operacao(x,y) esta operando soma() em seu endereco

    // 3. Apontando para a função subtracao
    operacao = subtracao; // mesma coisa da anterior
    printf("Resultado da Subtracao: %d\n", operacao(x, y)); //mesma coisa da anterior

    return 0;
}