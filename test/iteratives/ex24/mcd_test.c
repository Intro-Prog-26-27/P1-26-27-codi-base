#include <stdio.h>
#include <assert.h>

int mcd(int a, int b);

int main(void) {

    // cas general
    assert(mcd(48, 18) == 6);

    // cambio orden parametros
    assert(mcd(18, 48) == 6);

    // un nombre és múltiple de l'altre
    assert(mcd(20, 5) == 5);

    // nombres primers entre si
    assert(mcd(7, 13) == 1);

    // mateix nombre
    assert(mcd(12, 12) == 12);

    printf("Tests de MCD passats correctament!\n");

    return 0;
}
