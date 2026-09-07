#include <stdio.h>
#include <assert.h>

int suma_xifres(int n);

int main(void) {

    assert(suma_xifres(0) == 0);          // Cas límit
    assert(suma_xifres(7) == 7);          // Una sola xifra
    assert(suma_xifres(1234) == 10);      // 1 + 2 + 3 + 4
    assert(suma_xifres(9005) == 14);      // 9 + 0 + 0 + 5
    assert(suma_xifres(9999) == 36);      // Totes les xifres iguals

    printf("Tests de SumaXifres passats correctament!\n");

    return 0;
}
