#include <stdio.h>
#include <assert.h>

int calcular_ultim_digit(int n);

int main(void) {
     assert(calcular_ultim_digit(3)==3);
     printf("Ha passat el test calcularUltimDigit(3)==3\n");
     
     assert(calcular_ultim_digit(21)==1);
     printf("Ha passat el test calcularUltimDigit(21)==1\n");

     assert(calcular_ultim_digit(78956)==6);
     printf("Ha passat el test calcularUltimDigit(78956)==6\n");
     
     assert(calcular_ultim_digit(0)==0);
     printf("Ha passat el test calcularUltimDigit(0)==0\n");

     assert(calcular_ultim_digit(-37)==7);
     printf("Ha passat el test calcularUltimDigit(-37)==7\n");
     
     printf("TOTS els tests han passat!\n");

     // quan hagin passats tots els tests de dalt, descomenta aquest codi  
     /*
       int numero;
       printf("Introdueix un nombre enter: ");
 
       if (scanf("%d", &numero) == 1) {
          printf("L'última xifra és: %d\n", calcular_ultim_digit(numero));
       } else {
          printf("Error: L'entrada no és un nombre enter vàlid.\n");
       }

     return 0;
     */
}

