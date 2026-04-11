#include <stdio.h>

int main (void){

    int i=3, j=5;
    int *p, *q;

    p = &i;
    q = &j;

    // \033[ ... /033[0m -> sao formatadores de texto, pode adicionar cores e fontes. no final eu coloquei [0m para nao vazar cor para as outras strings

//      p == &i  
    printf("\033[32m [ \033[0m");
    
    printf("\033[31m %d \033[0m", p == &i);
    
    printf("\033[32m ]: \033[0m");
    
    printf("\033[37m p == &i\033[0m\n");

//      *p - *q
    printf("\033[32m [ \033[0m");
    
    printf("\033[31m %d \033[0m", *p - *q);
    
    printf("\033[32m ]: \033[0m");
    
    printf("\033[37m *p - *q \033[0m\n");


//      **&p
    printf("\033[32m [ \033[0m");

    printf("\033[31m %d \033[0m", **&p);

    printf("\033[32m ]: \033[0m");

    printf("\033[37m **&p \033[0m\n");



//      3 - *p/(*q) + 7
    printf("\033[32m [ \033[0m");
    
    printf("\033[31m %d \033[0m", 3 - *p/(*q) + 7);
    
    printf("\033[32m ]: \033[0m");

    printf("\033[37m 3 - *p/(*q) + 7 \033[0m\n");

}