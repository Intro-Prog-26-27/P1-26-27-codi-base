#include <stdio.h>
#include <assert.h>

int sumar_interval(int inici, int fi);

int main() {
    // Suma de 1 a 5: 1+2+3+4+5 = 15
    assert(sumar_interval(1, 5) == 15);
    // Suma de -2 a 2: -2 + -1 + 0 + 1 + 2 = 0
    assert(sumar_interval(-2, 2) == 0);
    assert(sumar_interval(5, 5) == 5);     // Cas límit
    printf("Tests de NombresInterval passats correctament!\n");
    return 0;
}
