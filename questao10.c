#include <stdio.h>

void prog1(){
    int vet[] = {4, 9, 13};
    int i;
 
    for(i=0;i<3;i++){
    printf("\033[33m %d \033[0m\n", *(vet+i));
    }

}

void prog2(){
int vet[] = {4, 9, 13};
int i;
for(i=0;i<3;i++){
printf("\033[36m %p \033[0m\n",vet+i);
}
}

int main(){
printf("\033[33m Programa 1 acessa o conteudo dos endereços: \033[0m\n");
    prog1();


printf("\033[36m \n \033[0m\n");


printf("\033[36m Programa 2 apenas os endereços: \033[0m\n");
    prog2();

}