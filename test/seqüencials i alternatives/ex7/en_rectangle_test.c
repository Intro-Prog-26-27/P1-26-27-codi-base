#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool punt_dins_rectangle(double x1, double y1, double x2, double y2, double px, double py);

int main() {
   assert(punt_dins_rectangle(0, 0, 10, 10, 5, 5) == true);   // dins
   assert(punt_dins_rectangle(0, 0, 10, 10, 11, 5) == false);    // fora (dreta)
   assert(punt_dins_rectangle(0, 0, 10, 10, 0, 5) == true);      // cas limit sobre una aresta
   assert(punt_dins_rectangle(0, 0, 10, 10, 10, 10) == true);    // cas limit sobre un vèrtex
   assert(punt_dins_rectangle(-5, -5, -1, -1, -3, -3) == true);  // coordenades negatives 
   printf("Tests de Rectangle passats correctament!\n");
   return 0;
}
