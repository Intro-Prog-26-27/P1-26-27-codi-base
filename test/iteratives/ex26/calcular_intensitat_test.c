#include <stdio.h>
#include <assert.h>

int calcular_intensitat(int fila, int columna, int centre);

int main(void) {

     // Cas general
    assert(calcular_intensitat(1, 5, 3) == 4);

    // fila i columna al centre
    assert(calcular_intensitat(3, 3, 3) == 0);

    // caselles adjacents al centre
    assert(calcular_intensitat(3, 2, 3) == 1);
    assert(calcular_intensitat(2, 3, 3) == 1);

    // caselles a la cantonada
    assert(calcular_intensitat(0, 0, 3) == 6);
    assert(calcular_intensitat(6, 6, 3) == 6); 

    printf("Tests de TaulerCalor passats correctament!\n");

    return 0;
}
