#include <stdio.h>
#include <assert.h>

int distancia_tot_entreno(int dies);

int main(void) {

    // Cas límit
    assert(distancia_tot_entreno(0) == 0);

    // Sense cap dia de descans
    assert(distancia_tot_entreno(1) == 1);
    assert(distancia_tot_entreno(6) == 21);

    // Primer dia de descans
    assert(distancia_tot_entreno(7) == 21);

    // Després del primer descans
    assert(distancia_tot_entreno(8) == 29);

    // Dos dies de descans (dies 7 i 14)
    assert(distancia_tot_entreno(14) == 84);

    printf("Tests d'Excursionista passats correctament!\n");

    return 0;
}
