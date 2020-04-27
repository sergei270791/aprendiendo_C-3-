#include <stdio.h>
void niParesniNones(int *p,int *q){
    if((*p)%2==(*q)%2){
        (*q)++;
    }

}
int main(){
    int x,y;
    printf("Introduce un número entero: ");
    scanf("%d",&x);
    printf("Introduce otro número entero: ");
    scanf("%d",&y);
    niParesniNones(&x,&y);
    printf("Los números tras llamar a la función son: %d y %d.",x,y);

    return 0;
}