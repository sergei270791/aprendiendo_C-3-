#include <stdio.h>

#define TAM 3

int main() {
    int datos[TAM] = {5,7,9};
    int *p;

    printf("datos[0] = %d\n", datos[0]); // 5
    printf("datos[1] = %d\n", datos[1]); // 7
    printf("datos[2] = %d\n", datos[2]); // 9
   
    p = &datos[0];
    printf("Valor al que apunta p: %d.\n", *p); // 5

    p++;
    printf("Valor al que apunta p: %d.\n", *p); // 7

    *p = 4;
    printf("Valor al que apunta p: %d.\n", *p); // 4
    
    p++;
    printf("Valor al que apunta p: %d.\n", *p); //9
    
    *p = 6;
    printf("Valor al que apunta p: %d.\n", *p); //6

    printf("datos[0] = %d\n", datos[0]); // 5
    printf("datos[1] = %d\n", datos[1]); // 4
    printf("datos[2] = %d\n", datos[2]); // 6

    return 0;
}