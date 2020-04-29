#include <stdio.h>

#define DIM 3

double media(int *p, int num) {
    int i;
    double m;

    for (i=0, m=0.0; i<num; i++)
        m += p[i];

    return m/num;
}

int main() {
    int datos[DIM] = {2,3,5};

    printf("La media es: %.2lf", media(datos, DIM));

    return 0;
}