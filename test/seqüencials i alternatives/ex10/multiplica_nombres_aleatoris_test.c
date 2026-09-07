#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool comprova_multiplicacio(int num1, int num2, int resposta_usuari);

int main() {
    // Tot i que el joc és aleatori, provem que la funció que fa d'àrbitre funcioni
    assert(comprova_multiplicacio(5, 4, 20) == true);
    assert(comprova_multiplicacio(7, 8, 50) == false);
    
    printf("Tests de MultiplicaNombresAleatoris passats correctament!\n");
    return 0;
}
