#include <assert.h>
#include <stdio.h>

#include "../../../src/enums/ex15/semafor.h"

int main(void) {

    /* VERMELL -> VERD */
    assert(seguent_color(VERMELL) == VERD);

    /* GROC -> VERMELL */
    assert(seguent_color(GROC) == VERMELL);

    /* VERD -> GROC */
    assert(seguent_color(VERD) == GROC);

    printf("Tests de seguent_color() passats correctament!\n");

    return 0;
}
