#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool intersequen_intervals(double x1, double x2, double y1, double y2);

int main() {

  assert(intersequen_intervals(2.0, 4.4, 5.0, 6.3) == false);  // no intersequen
  assert(intersequen_intervals(2.0, 4.4, 3.0, 6.3) == true);   // intersecció parcial
  assert(intersequen_intervals(2.0, 4.4, 4.4, 6.3) == true);   // comparteixen un extrem
							      
  printf("Tests d'Intervals passats correctament!\n");
  return 0;
}
