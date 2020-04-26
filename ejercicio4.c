#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}
void iterar(int num){
    int i;
    for(i=2;i<=num;i++){
        if (esPrimo(i))
            printf("%d es primo.\n", i);
        else
            printf("%d no es primo.\n",i);
    }
}

int main() {
    int numero;
    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    iterar(numero);
    return 0;
}