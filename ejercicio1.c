#include <stdio.h>

void area() {
    double area;
    int base,altura;
    printf("Introduce la base del triángulo: ");
    scanf("%d",&base);
    printf("Introduce la altura del triángulo: ");
    scanf("%d",&altura);
    area=0.5*base*altura;
    printf("El área del triángulo de base %d y altura %d es %.2lf.",base,altura,area);
    return;
}

int main() {
    area();
    return 0;
}