#include <stdio.h>
#include <assert.h>

int max_of3(int a, int b, int c);

int main() {
    assert(max_of3(1, 2, 3) == 3);
    assert(max_of3(5, 2, 1) == 5);
    assert(max_of3(1, 9, 3) == 9);
    assert(max_of3(4, 4, 4) == 4);
    assert(max_of3(-1, -5, -2) == -1);
    
    printf("Tests de Maxof3 passats correctament!\n");
    return 0;
}