#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>

bool es_senar(int num);
double calcular_mitjana(int suma_total, int quantitat);

int main() {
    assert(es_senar(7) == true);
    assert(es_senar(4) == false);
    
    //por precision de floats, comparem amb un epsilon
    assert(fabs(calcular_mitjana(11, 3) - (11.0 / 3.0)) < 1e-6);
    assert(calcular_mitjana(0, 0) == 0.0);
    
    printf("Tests de MitjanaParells passats correctament!\n");
    return 0;
}
