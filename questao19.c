#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    float *vetor, temp;

    scanf("%d", &n);

    // alocação para n floats
    vetor = (float *) malloc(n * sizeof(float));

    // verificação se a memória foi alocada
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // leitura dos valores
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }



    // Ordenação

    // Percorre o vetor várias vezes empurrando o maior para o fim
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Se o elemento da esquerda for maior que o da direita, troca
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // exibição
    printf("\nValores ordenados:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    //Liberação da memória
    free(vetor);
    
    //limpar o vetor
    vetor = NULL;

    return 0;
}