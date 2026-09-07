#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool punt_dins_circumferencia(double cx, double cy, double r, double px, double py);

int main() {

  assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 0.0, 0.0) == true);   // justament al centre
  assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 0.5, 0.0) == true);   // dins
  assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 2.0, 2.0) == false);  // fora
  assert(punt_dins_circumferencia(0.0, 0.0, 1.0, 1.0, 0.0) == true);   // cas límit
  assert(punt_dins_circumferencia(1.0, 2.0, 3.0, 1.0, 2.0) == true);   // centre no a l'origen    
    
  printf("Tests d'EnCircumferencia passats correctament!\n");
  return 0;
}
