#include <stdio.h>

int main() {
    char   v_c[4];
    int    v_i[4];
    float  v_f[4];
    double v_d[4];

    printf("--- ARITMETICA DE PONTEIROS ---\n\n");

    printf("CHAR (1 byte):\n");
    printf("x+1: %p | x+2: %p | x+3: %p\n\n", (void*)(v_c+1), (void*)(v_c+2), (void*)(v_c+3));

    printf("INT (2 bytes*):\n"); 
    printf("x+1: %p | x+2: %p | x+3: %p\n\n", (void*)(v_i+1), (void*)(v_i+2), (void*)(v_i+3));

    printf("FLOAT (4 bytes):\n");
    printf("x+1: %p | x+2: %p | x+3: %p\n\n", (void*)(v_f+1), (void*)(v_f+2), (void*)(v_f+3));

    printf("DOUBLE (8 bytes):\n");
    printf("x+1: %p | x+2: %p | x+3: %p\n", (void*)(v_d+1), (void*)(v_d+2), (void*)(v_d+3));

    return 0;
}