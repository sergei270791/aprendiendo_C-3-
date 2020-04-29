#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void verificar(int filas,int columnas,char **p){
    int i,j,ban;
    for(i=0;i<columnas && p[0][i]!=0;i++){
        for(j=0;j<columnas && p[1][j]!=0;j++){
            if(p[0][i]!=p[1][j]){
                ban=0;
            }else{
                ban=1;
                break;
            }
        }
        if(ban){
            printf("El carácter %c aparece en la cadena %s\n",p[0][i],p[1]);
        }else{
            printf("El carácter %c NO aparece en la cadena %s\n",p[0][i],p[1]);
        }
        
    }
}
int main() {
    int i, j, filas=2, columnas;
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
    verificar(filas,columnas,matriz);

    for (i=0; i<filas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}