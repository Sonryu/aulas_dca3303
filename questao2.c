#include <stdio.h>

int main(void){

    int i=5, *p;
    p = &i;
    printf("%p\n %p\n %d\n %d\n %d\n %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

}
