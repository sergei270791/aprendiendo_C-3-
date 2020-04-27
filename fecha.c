#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

void escribir_fecha(Fecha f) {
    printf("%d/%d/%d\n", f.dia, f.mes, f.anyo);
}

void inicializar_fecha(Fecha *f) {
    f->dia = 1;
    f->mes = 1;
    f->anyo = 2000;
}

int main() {
    Fecha x = {10, 3, 1089};

    escribir_fecha(x);
    inicializar_fecha(&x);
    escribir_fecha(x);

    return 0;
}