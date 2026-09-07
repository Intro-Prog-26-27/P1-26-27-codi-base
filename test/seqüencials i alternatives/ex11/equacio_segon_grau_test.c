#include <stdio.h>
#include <assert.h>
#include <math.h>

int resol_equacio(double a, double b, double c, double *sol1, double *sol2);

int main() {
    double s1, s2;
    
    // a=1, b=2, c=4 -> No té solucions
    assert(resol_equacio(1.0, 2.0, 4.0, &s1, &s2) == 0);
    
    // a=1, b=2, c=1 -> 1 solució (-1.0)
    assert(resol_equacio(1.0, 2.0, 1.0, &s1, &s2) == 1);
    assert(s1 == -1.0);
    
    // a=-4, b=2, c=3 -> 2 solucions
    assert(resol_equacio(-4.0, 2.0, 3.0, &s1, &s2) == 2);
    
    printf("Tests d'EquacioSegonGrau passats correctament!\n");
    return 0;
}