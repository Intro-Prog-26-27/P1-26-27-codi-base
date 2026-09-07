#include <stdio.h>
#include <assert.h>

int calcular_max(int actual, int nou);

int main() {
    assert(calcular_max(5, 10) == 10);
    assert(calcular_max(20, 3) == 20);
    assert(calcular_max(-1, -5) == -1);
    
    printf("Tests de Max passats correctament!\n");
    return 0;
}