#include <stdio.h>
struct teste{
    int x; 
    char nome[20];
};

int main(){
    struct teste t = {3, "Jose"};
    struct teste *s = &t;

    printf("%d \n", s->x);
    printf("%s \n", s->nome);

}