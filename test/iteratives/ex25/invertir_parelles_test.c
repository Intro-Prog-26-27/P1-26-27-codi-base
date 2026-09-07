#include <stdio.h>
#include <assert.h>

int invertir_parelles(int n);

int main(void) {

    // Cas general
    assert(invertir_parelles(12345678) == 8642);

    // totes les xifres són parelles
    assert(invertir_parelles(2468) == 8642);

    // no hi ha cap xifra parella
    assert(invertir_parelles(13579) == 0);

    // amb zeros
    assert(invertir_parelles(102030) == 20);

    // cas límit 0
    assert(invertir_parelles(0) == 0);

    // cas límit una sola xifra parella
    assert(invertir_parelles(8) == 8);

    // cas limit una sola xifra senar
    assert(invertir_parelles(7) == 0);

    printf("Tests d'InvertirParelles passats correctament!\n");

    return 0;
}
