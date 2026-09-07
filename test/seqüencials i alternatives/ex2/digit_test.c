#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool es_digit(int n);

int main() {
    assert(es_digit(4) == true);   //cas normal
    assert(es_digit(0) == true);   //límit inferior
    assert(es_digit(9) == true);   //límit superior
    assert(es_digit(10) == false); //just per sobra del límit
    assert(es_digit(-1) == false); //just per sota del límit
    assert(es_digit(234) == false);//cas clarament fora de rang 
    
    printf("Tests de Digit passats correctament!\n");
    return 0;
}
