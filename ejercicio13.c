#include <stdio.h>
#define CAM 42
#define DIM 3
void imprimir(int *p,int num){
    int i;
    for ( i = 0; i < num; i++)
    {
        printf("%d ",p[i]);
    }
    
}
void cambiar(int *p, int num) {
    int i;
    for (i=0 ; i<num; i++){
        p[i]+=CAM;
    }
}

int main() {
    int datos[DIM] = {8, 24, 65};
    printf("El contenido de la tabla es: ");
    imprimir(datos,DIM);
    printf("\nEl nuevo contenido de la tabla es: ");
    cambiar(datos,DIM);
    imprimir(datos,DIM);

    return 0;
}