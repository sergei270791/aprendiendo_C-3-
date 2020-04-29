#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *edades;
    double total=0;

    printf("¿Cuántas personas han acudido a la fiesta? ");
    scanf("%d", &n);

    edades = (int*) malloc(n*sizeof(int));

    if (edades == NULL) {
        printf("La reserva de memoria ha fallado.");
        return 1;
    }

    for (i=0; i<n; i++) {
        printf("Dime la edad de la persona %d: ", i+1);
        scanf("%d", &edades[i]);  
        total += edades[i];   
    }

    printf("La media de edad de la fiesta es: %.2lf", total/n);
    free(edades);

    return 0;
}