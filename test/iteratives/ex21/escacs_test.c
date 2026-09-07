#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool es_casella_blanca(int fila, int columna);

int main() {
   // combinaciones fila columna (Segun paridad)
   // Par + par
    assert(es_casella_blanca(0, 0) == true);

    // Impar + impar
    assert(es_casella_blanca(7, 7) == true);

    // Par + impar
    assert(es_casella_blanca(0, 1) == false);

    // Impar + par
    assert(es_casella_blanca(1, 0) == false);

    printf("Tests d'Escacs passats correctament!\n");
    return 0;
}
