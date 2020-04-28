#include <stdio.h>

#define TAM 40

int main() {
    char datos[TAM];
    char *p;
    int i,cont=0;

    printf("Introduce una cadena: "); 
    scanf("%s",datos);
    printf("%s ",datos);
    for (i=0, p=&datos[0]; i<TAM && *p!=0; i++, p++){
        cont++;
    }
    printf("tiene %d caracteres.",cont);
    return 0;
}