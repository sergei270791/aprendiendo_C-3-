#include <stdio.h>

#define DIM 10

int minu_a_mayu(char *p) {
    int cont;
    
    for (cont=0; *p!= 0; p++,cont++){
        *p += 'A'-'a';
    }
    return cont;


}

int main() {
    char nombre[DIM];
    printf("Introduce una cadena de caracteres en minúsculas: ");
    scanf("%s",nombre),
    printf("La cadena en mayúsculas es %s y su tamaño %d.", nombre,minu_a_mayu(nombre));


    return 0;
}