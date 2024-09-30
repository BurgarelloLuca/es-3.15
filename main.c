#include <stdio.h>

int main(void) {
   char categoria;
    float costo;
    printf("inserire la categoria: pensionati (P), studenti (S) o disoccupati (D) ");
    scanf("%c", &categoria);
    printf("inserire il costo del biglietto");
    scanf("%f", &costo);
    if (categoria == 'P') {
        costo=costo-(costo*0.1);
    }
    else if (categoria == 'S') {
        costo=costo-(costo*0.15);
        }
        else {
        costo=costo-(costo*0.25);
    }
    printf("il costo del biglietto e': %f", costo);
    return 0;
}
