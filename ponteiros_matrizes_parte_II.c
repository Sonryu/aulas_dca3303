#include <stdlib.h>
int main(void){
    int nl = {4}, nc = {5}, i;

    int **x;

        x = malloc(nl * sizeof(int*));
            
            for (i=0; i < nl; i++){
                x[i]=malloc(nc * sizeof(int));
            }
        
        x[1][2] = 3;
            
            for (i=0; i < nl ; i++){
                free(x[i]);
            }
        free(x);
            
}