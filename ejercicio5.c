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
void imprimir(int num){
    if (esPrimo(num))
        printf("El numero %d es primo ", num);
    else
        printf("El numero %d no es primo.", num);
}
void gemelo(int num){
    if(esPrimo(num)){
        if (esPrimo(num-2)!=0 && esPrimo(num+2)!=0 ){
            printf("y los números %d y %d son primos gemelos.",num-2,num+2);
        }else if(esPrimo(num-2)){
            printf("y el %d es primo gemelo.", num-2);
        
        }else if(esPrimo(num+2)){
            printf("y el %d es primo gemelo.", num+2);
        
        }else{
            printf("pero no tiene un primo gemelo.");

        }
    }
    
}

int main() {
    int numero;

    printf("Introduce un número entero: ");
    scanf("%d", &numero);
    imprimir(numero);
    gemelo(numero);

    return 0;
}