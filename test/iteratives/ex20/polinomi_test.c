#include <stdio.h>
#include <assert.h>

double avaluar_polinomi(double a, double b, double c, double x);

int main(void) {

    // f(x) = x²
    assert(avaluar_polinomi(1, 0, 0, 2) == 4);

    // f(x) = 2x² + 3x + 1
    assert(avaluar_polinomi(2, 3, 1, 2) == 15);

    // f(x) = 5
    assert(avaluar_polinomi(0, 0, 5, 10) == 5);

    // f(x) = -x² + 4
    assert(avaluar_polinomi(-1, 0, 4, 2) == 0); 

    printf("Tests de polinomi passats correctament!\n");
    return 0;
}
