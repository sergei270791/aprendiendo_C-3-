#include <stdio.h>

#define TAM 10000

typedef struct {
    int datos[TAM];
    int ocupadas;
} Tabla;

void inicializar_tabla(Tabla *t) {
    t->ocupadas=0;
}

double media_tabla(Tabla * t) {
    int i, suma;
    for (i=suma=0; i < t->ocupadas; i++)
         suma += t->datos[i];
    return (double)suma / t->ocupadas;
}

int main() {
    Tabla x;
    int i, num;
    double med;

    inicializar_tabla(&x);
    
    do {
       printf("Cuántos valores vas a leer (entre 1 y %d)?: ", TAM);
       scanf("%d", &num);

       if (num<1 || num>TAM)
          printf("Error, tienes que introducir un número entre 1 y %d\n", TAM);
    } while (num<1 || num>TAM);

    for (i=0; i<num; i++) {
       printf("Introduce el dato %d: ", i+1);
       scanf("%d", &x.datos[i]);
       x.ocupadas++;
    }
    
    med = media_tabla(&x);
    printf("La media de los datos leídos es: %.2lf", med);

    return 0;
}