#include <stdio.h>
int main(){
    int x,y,*p,*q;
    double media,*r;
    p=&x;
    q=&y;
    r=&media;
    printf("Introduce un número: ");
    scanf("%d",p);
    printf("Introduce otro número: ");
    scanf("%d",q);
    media=0.5*(*p+*q);
    printf("media = %.2lf",*r);

    return 0;
}