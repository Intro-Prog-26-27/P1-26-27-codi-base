#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool es_rang_valid(int num);
int avaluar_intent(int secret, int intent);

int main() {
    assert(es_rang_valid(3) == true);
    assert(es_rang_valid(9) == false);
    
    assert(avaluar_intent(4, 4) == 0);
    assert(avaluar_intent(4, 2) == 1); // Secret és major
    assert(avaluar_intent(1, 5) == -1); // Secret és menor
    
    printf("Tests d'EndevinarNombre passats correctament!\n");
    return 0;
}