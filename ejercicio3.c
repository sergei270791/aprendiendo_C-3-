#include <stdio.h>

double area(int base,int altura) {
    double area;
    area=0.5*base*altura;
    return area;
}

int main() {
    int x,y;
    printf("Introduce la base del triángulo: ");
    scanf("%d",&x);
    printf("Introduce la altura del triángulo: ");
    scanf("%d",&y);
    printf("El área del triángulo de base %d y altura %d es %.2lf.",x,y,area(x,y));

    return 0;
}