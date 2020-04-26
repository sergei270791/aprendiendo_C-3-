#include <stdio.h>

void area(int base,int altura) {
    double area;
    area=0.5*base*altura;
    printf("El área del triángulo de base %d y altura %d es %.2lf.",base,altura,area);
    return;
}

int main() {
    int x,y;
    printf("Introduce la base del triángulo: ");
    scanf("%d",&x);
    printf("Introduce la altura del triángulo: ");
    scanf("%d",&y);
    area(x,y);
    return 0;
}