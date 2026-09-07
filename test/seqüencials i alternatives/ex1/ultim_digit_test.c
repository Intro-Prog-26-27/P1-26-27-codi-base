/* test/test_ultim_digit.c */
#include <stdio.h>
#include <assert.h>
//#include "UltimDigit.h"
int calcular_ultim_digit(int n);

int main() {
    // Si algun d'aquests falla, el programa s'atura immediatament (avorta)
      
      assert(calcular_ultim_digit(3) == 3);

      assert(calcular_ultim_digit(21) == 1);
      
      assert(calcular_ultim_digit(78956) == 6);
   
      assert(calcular_ultim_digit(-37) == 7);
    
    // Si el programa arriba a aquesta línia, significa que cap assert ha fallat!
    printf("Tests de UltimDigit passats correctament!\n");
    
    return 0; // Retornem 0 (èxit) perquè GitHub sàpiga que el test ha anat bé
}
