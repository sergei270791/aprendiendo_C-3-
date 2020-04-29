#include <stdio.h>

#define DIM 10

void minu_a_mayu(char *p) {
    for (; *p!= 0; p++)
        *p += 'A'-'a';
}

int main() {
    char nombre[DIM] = "data";

    minu_a_mayu(nombre);
    printf("%s", nombre);

    return 0;
}