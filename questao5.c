#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void funcao(char** str){
    str++; // o erro esta aqui, ela esta manipulando a propria copia de str, e não o endereço de str na main.
}

int main(){

    char *str = (void *)malloc(50*sizeof(char));
 
    strcpy(str, "Agostinho");
 
    funcao(&str);
 
    puts(str);
 
    free(str);

return 0;
}