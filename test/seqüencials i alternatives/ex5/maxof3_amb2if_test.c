#include <stdio.h>
#include <assert.h>

int max_of3_amb2if(int a, int b, int c);

int main() {
  assert(max_of3_amb2if(10, 5, 8) == 10);    // a és el màxim
  assert(max_of3_amb2if(3, 7, 5) == 7);      // b és el màxim
  assert(max_of3_amb2if(1, 2, 3) == 3);      // c és el màxim

  assert(max_of3_amb2if(7, 7, 5) == 7);      // a == b > c
  assert(max_of3_amb2if(7, 5, 7) == 7);      // a == c > b
  assert(max_of3_amb2if(5, 7, 7) == 7);      // b == c > a

  assert(max_of3_amb2if(4, 4, 4) == 4);      // tots iguals
  
  printf("Tests de Maxof3Amb2if passats correctament!\n");
  return 0;
}
