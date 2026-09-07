#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void calcular_min_rectangle(double ax1, double ay1, double ax2, double ay2, double bx1, double by1, double bx2, double by2, double *rx1, double *ry1, double *rx2, double *ry2);

int main() {
    double rx1, ry1, rx2, ry2;
    
   // Rectangles que intersequen parcialment
   calcular_min_rectangle(1.0, 3.0, 3.0, 5.0,
                       2.0, 1.0, 4.0, 4.0,
                       &rx1, &ry1, &rx2, &ry2);
   assert(rx1 == 1.0 && ry1 == 1.0 && rx2 == 4.0 && ry2 == 5.0);

   // Un rectangle conté completament l'altre
   calcular_min_rectangle(0.0, 0.0, 10.0, 10.0,
                       2.0, 2.0, 5.0, 5.0,
                       &rx1, &ry1, &rx2, &ry2);
   assert(rx1 == 0.0 && ry1 == 0.0 && rx2 == 10.0 && ry2 == 10.0);

   // Rectangles separats
   calcular_min_rectangle(1.0, 1.0, 2.0, 2.0,
                       4.0, 4.0, 6.0, 6.0,
                       &rx1, &ry1, &rx2, &ry2);
   assert(rx1 == 1.0 && ry1 == 1.0 && rx2 == 6.0 && ry2 == 6.0);

   // Es toquen per una aresta
   calcular_min_rectangle(0.0, 0.0, 2.0, 2.0,
                       2.0, 0.0, 4.0, 2.0,
                       &rx1, &ry1, &rx2, &ry2);
   assert(rx1 == 0.0 && ry1 == 0.0 && rx2 == 4.0 && ry2 == 2.0);

   // Coordenades negatives
   calcular_min_rectangle(-5.0, -4.0, -2.0, -1.0,
                       -3.0, -6.0, 1.0, 0.0,
                       &rx1, &ry1, &rx2, &ry2);
   assert(rx1 == -5.0 && ry1 == -6.0 && rx2 == 1.0 && ry2 == 0.0); 
    
    printf("Tests de MinRectangle passats correctament!\n");
    return 0;
}
