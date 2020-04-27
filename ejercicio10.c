#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

void escribir_fecha(Fecha f) {
    printf("%d/%d/%d\n", f.dia, f.mes, f.anyo);
}

void incrementaDia (Fecha *f) {
    if(f->dia<30){
        f->dia++;
    }else if(f->mes !=12){
        f->dia = 1;
        f->mes++;
    }else{
        f->dia = 1;
        f->mes = 1;
        f->anyo++;
    }
}

int main() {
    Fecha x ;
    printf("Introduce un día: ");
    scanf("%d",&x.dia);
    printf("Introduce un mes: ");
    scanf("%d",&x.mes);
    printf("Introduce un año: ");
    scanf("%d",&x.anyo);
    incrementaDia (&x);
    printf("El día siguiente al introducido es: ");
    escribir_fecha(x);
    return 0;
}