#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *numeros;
    double total=0;

    printf("Introduce cuántos enteros se van a leer: ");
    scanf("%d", &n);

    numeros = (int*) malloc(n*sizeof(int));

    if (numeros == NULL) {
        printf("La reserva de memoria ha fallado.");
        return 1;
    }

    for (i=0; i<n; i++) {
        printf("Introduce el numero %d: ", i+1);
        scanf("%d", &numeros[i]);  
        total += numeros[i];   
    }

    printf("La media de los números leídos es: %.2lf", total/n);
    free(numeros);

    return 0;
}