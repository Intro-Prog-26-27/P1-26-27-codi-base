#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

bool es_troben(int x1, int s1, int x2, int s2);

int main(void) {

    // El primer cangur comença més a l'esquerra
    assert(es_troben(1, 2, 2, 1) == true);   // Coincideixen en un salt
    assert(es_troben(0, 3, 4, 2) == true);   // Coincideixen després de diversos salts
    assert(es_troben(1, 1, 2, 1) == false);  // Mai coincideixen
    assert(es_troben(1, 2, 1, 3) == true);   // Comencen a la mateixa posició
    assert(es_troben(0, 1, 3, 3) == false);  // El cangur de darrere és més lent

    // El segon cangur comença més a l'esquerra
    assert(es_troben(2, 1, 1, 2) == true);   // Coincideixen en un salt
    assert(es_troben(4, 2, 0, 3) == true);   // Coincideixen després de diversos salts
    assert(es_troben(2, 1, 1, 1) == false);  // Mai coincideixen
    assert(es_troben(1, 3, 1, 2) == true);   // Comencen a la mateixa posició
    assert(es_troben(3, 3, 0, 1) == false);  // El cangur de darrere és més lent

    printf("Tests de Cangurs passats correctament!\n");

    return 0;
}
