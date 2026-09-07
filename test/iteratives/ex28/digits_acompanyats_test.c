#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool digits_acompanyats(int n);

int main(void) {

    // Cas límit
    assert(digits_acompanyats(7) == false);

    // Totes les xifres en parelles
    assert(digits_acompanyats(112233) == true);

    // Blocs de més de dues xifres
    assert(digits_acompanyats(111222) == true);

    // Una xifra sola al final
    assert(digits_acompanyats(11223) == false);

    // Una xifra sola al mig
    assert(digits_acompanyats(122233) == false);

    // Totes diferents
    assert(digits_acompanyats(12345) == false);

    // Una única parella
    assert(digits_acompanyats(11) == true);

    printf("Tests de DigitsAcompanyats passats correctament!\n");

    return 0;
}
