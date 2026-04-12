#include <stdio.h>

int main() {

    int valor;
    int *p1;
    
    float temp;
    float *p2;
    
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    
    int idade;
    int vetor[3];
    int *p4;
    int *p5;


/* (a) */

valor = 10;
p1 = &valor;
*p1 = 20; // o valor de "valor" foi mudado para 20 atravez de *p1
printf("%d \n", valor);


/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0; //o conteudo de p2, que é o endereço de temp, agora é 29.0
printf("%.1f \n", temp);

/* (c) */
p3 = &nome[0];
aux = *p3;// &nome[0] é o endereço da primeira letra da string "Ponteiros
printf("%c \n", aux);

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux);

/* (e) */
p3 = nome; //O nome de um vetor (nome) aponta automaticamente para o primeiro elemento.
printf("%c \n", *p3);

/* (f) */
p3 = p3 + 4; // foi somado 4 ao endereco de p3, se antes era "P", apos 4 "casas"  é "e"
printf("%c \n", *p3);

/* (g) */
p3--; //agora "volta um casa", sendo assim, "t"
printf("%c \n", *p3);

/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4; // lendo o conteudo de p4, nesse caso por n ter especificado qual a posicao do array "vetor", ele vai iniciar do zero.
printf("%d \n", idade);

/* (i) */
p5 = p4 + 1;
idade = *p5; // andou "uma casa" na memoria, sendo assim, agora esta em vetor[1] (segunda 'casa')
printf("%d \n", idade);

/* (j) */
p4 = p5 + 1;
idade = *p4; // mesma coisa mas apenas inverteu p4  p5, no fim apenas "andou mais uma casa" na memoria
printf("%d \n", idade);

/* (l) */
p4 = p4 - 2;
idade = *p4; // voltou "duas casas"
printf("%d \n", idade);

/* (m) */
p5 = &vetor[2] - 1; // recua uma posicao a partir do endereço de vetor[2]
printf("%d \n", *p5);

/* (n) */
p5++; // desfaz a anterior. sendo assim, estava na posição de vetor[1] e agora volta pra vetor[2]
printf("%d \n", *p5);
return(0);

}