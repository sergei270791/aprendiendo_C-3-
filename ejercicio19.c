#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verificar(int filas,int columnas,char **p){
    int i,j,cont,aux;
    for(i=0,cont=0;i<columnas && p[0][i]!=0;i++,cont++){
        p[2][i]=p[0][i];
    }
    aux=cont;
    for(i=0;i<columnas && p[1][i]!=0;i++,cont++){
        p[2][i+aux]=p[1][i];
    }
    printf("Cadena concatenada: %s",p[2]);
    return cont;
         
}

int main() {
    int i, j, filas=3, columnas;
    char **matriz;
    printf("Introduce el tamaño máximo de las cadenas de caracteres: ");
    scanf("%d", &columnas);
    if(columnas<0){
        printf("Error, no se puede reservar memoria para la primera cadena.");
        return 1;
    }
    matriz = (char**) malloc(filas*sizeof(char*));
        
        for (i=0; i<filas; i++) {
        matriz[i] = (char*) malloc(columnas*sizeof(char));
        
    }
    printf("Introduce una cadena: ");
    scanf("%s",matriz[0]);
    printf("Introduce otra cadena: ");
    scanf("%s",matriz[1]);
    printf("\nLongitud: %d",verificar(filas,columnas,matriz));

    for (i=0; i<filas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}