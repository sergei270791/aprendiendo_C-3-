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
int primoMayor(int num){
    int maximo=2,i;
    for(i=2;i<=num;i++){
        if (esPrimo(i)){
            maximo=i;
        }
    }
    return maximo;
}
int main() {
    int numero;
    do{
    printf("Introduce un número superior a 1: ");
    scanf("%d", &numero);
    }while(numero<2);
    printf("El mayor primo comprendido entre 2 y %d es %d.",numero,primoMayor(numero));

    return 0;
}