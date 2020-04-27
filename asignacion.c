#include <stdio.h>

void incrementar(int *x) {
    (*x)++;
}

int main() {
    int i=1;

    printf("Valor de i antes de incrementar(): %d\n", i);
    incrementar(&i);
    printf("Valor de i después de incrementar(): %d", i);

    return 0;
}