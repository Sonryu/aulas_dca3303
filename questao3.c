#include <stdio.h>

int main (void) {
int i = {0}, j={0};
int *p, *q;

    p = &i;
    printf("\033[31m p=&i \033[0m");
    printf(":");
    printf("\033[32m %d \033[0m", p);

    // *q = &j;
    printf("\033[31m *q = &j \033[0m");
    printf(":");
    printf("\033[32m %d \033[0m", *q);

    p = &*&i;
    printf("\033[31m p = &*&i \033[0m");
    printf(":");    
    printf("\033[32m %d \033[0m", p);

    // i = (*&)j;
    printf("\033[31m i = (*&)j \033[0m");
    printf(":");
    printf("\033[32m %d \033[0m", i);

    i = *&j;
    printf("\033[31m i = *&j \033[0m");
    printf(":");    
    printf("\033[32m %d \033[0m", i);

    i = *&*&j;
    printf("\033[31m i = *&*&j \033[0m");
    printf(":");   
    printf("\033[32m %d \033[0m", i);

    //q = *p;
    printf("\033[31m q = *p \033[0m");
    printf(":");
    printf("\033[32m %d \033[0m", q);
    
    i = (*p)++ + *q;
    printf("\033[31m i = (*p)++ + *q \033[0m");
    printf(":");
    printf("\033[32m %d \033[0m", i);




}