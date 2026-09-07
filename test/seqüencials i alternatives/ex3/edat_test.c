#include <stdio.h>
#include <assert.h>

int calcular_any_naixement(int edat_actual);
int calcular_any_doble_edat(int edat_actual);

int main() {

    assert(calcular_any_naixement(1) == 2025);
    assert(calcular_any_naixement(55) == 1971);
    assert(calcular_any_naixement(120) == 1906);

    assert(calcular_any_doble_edat(1) == 2027);
    assert(calcular_any_doble_edat(55) == 2081);
    assert(calcular_any_doble_edat(120) == 2146);
    
    printf("Tests d'Edat passats correctament!\n");
    return 0;
}
