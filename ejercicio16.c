#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;
int main(){
    Fecha *fechas;
    int dim,i,j,aux,*comp,*comp2;
    printf("Introduce la dimensión de la tabla: ");
    scanf("%d",&dim);
    fechas = (Fecha *) malloc(dim * sizeof(Fecha));
    comp = (int*) malloc(dim * sizeof(int));
    comp2 = (int*) malloc(dim * sizeof(int));
    if (fechas == NULL) {
        printf("La reserva de memoria ha fallado.");
        return 1;
    }
    if (comp == NULL) {
        printf("La reserva de memoria ha fallado.");
        return 1;
    }

    for (i=0; i<dim; i++) {
        printf("\nIntroduce día de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].dia); 
        printf("Introduce mes de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].mes);
        printf("Introduce año de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].anyo);
        comp[i]=fechas[i].dia+fechas[i].mes*31+fechas[i].anyo*961;
        comp2[i]=comp[i];

    }
    for (i=1;i<dim;i++){
        for (j=0;j<dim-i;j++){
            if (comp[j]>=comp[j+1]){
                aux=comp[j];
                comp[j]=comp[j+1];
                comp[j+1]=aux;
            }

        }

    }
    for(i=0;i<dim;i++){
        if(comp2[i]==comp[0]){
            printf("La fecha más antigua es: %d/%d/%d",fechas[i].dia,fechas[i].mes,fechas[i].anyo);
        }

    }
    free(fechas);
    free(comp);
    free(comp2);
    return 0;
}