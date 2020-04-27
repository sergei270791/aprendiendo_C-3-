#include <stdio.h>

int main() {
    int i=10, *p;
    short s=2, *q;
    char c='a', *r;

    p = &i;
    q = &s;
    r = &c;

    printf("Introduce un número entero: ");
    scanf("%d", &i);
    printf("El número introducido es %d.\n", i);
    
    printf("Introduce un número entero: ");
    scanf("%d", p);
    printf("El número introducido es %d.\n", i);

    return 0;
}