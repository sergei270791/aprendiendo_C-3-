#include <stdio.h>
void estadistica (int x, int y, double *pMedia, double *pVar){
    *pMedia= (x+y)/2;
    *pVar=((x-*pMedia)*(x-*pMedia) + (y-*pMedia)*(y-*pMedia)) /2;


}
int main(){
    int a,b;
    double media,varianza;
    printf("Introduce un número entero: ");
    scanf("%d",&a);
    printf("Introduce otro número entero: ");
    scanf("%d",&b);
    estadistica (a,b,&media,&varianza);
    printf("Media = %.2lf\nVarianza = %.2lf",media,varianza);

    return 0;
}