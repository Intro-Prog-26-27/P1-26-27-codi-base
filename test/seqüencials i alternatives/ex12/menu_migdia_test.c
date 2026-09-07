#include <stdio.h>
#include <assert.h>

double calcular_preu_menu(int opcio);

int main() {

  assert(calcular_preu_menu(1) == 10.50);   // menú bàsic
  assert(calcular_preu_menu(2) == 14.90);   // menú complet
  assert(calcular_preu_menu(3) == 18.00);   // menú degustació
  assert(calcular_preu_menu(4) == 0.00);    // opció no vàlida

  printf("Tests de MenuMigdia passats correctament!\n");
  return 0;
}
