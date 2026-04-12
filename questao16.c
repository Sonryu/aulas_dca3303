#include <stdio.h>

int main(void){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;

   // scanf("%f", &aloha);
        //scanf espera apenas o endereço de onde o número deve cair. o certo deveria ser apenas aloha ou &aloha[0]
    
    //    aloha = "value";
        //vetor de numeros reais tentando receber uma string.

    //printf("%f", aloha);
        //O programa vai imprimir um lixo de memória ou dar erro. %f espera um valor enquanto aloha entrega apenas um endereco

    coisas[4][4] = aloha[3];

    //coisas[5] = aloha;
        //endereço fixo)

   // pf = value;
    //pf é um ponteiro. value é um número

    pf = aloha;
}
