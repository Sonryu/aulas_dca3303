#include <stdio.h>
#include <stdlib.h>

void gera_vazamento() {
    
    int *ptr = (int *) malloc(50 * sizeof(int));//aloca memória para 100 inteiros

    // O erro: a função termina, a variável local 'ptr' some, mas o espaço alocado continua ocupado na RAM.
    // Não houve free(ptr).
}

int main() {
    while(1) {
        gera_vazamento(); 
        //Em pouco tempo, o PC vai ficar lento pq milhares de blocos de memória estão "órfãos".
    }
    return 0;
}