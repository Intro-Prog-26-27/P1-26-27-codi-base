#include <stdio.h>
#include <assert.h>

int obtenir_direccio(int inici, int fi);

int main() {
    assert(obtenir_direccio(2, 5) == 1);
    assert(obtenir_direccio(8, 3) == -1);
    assert(obtenir_direccio(4, 4) == 0);
    
    printf("Tests de DescensAscens passats correctament!\n");
    return 0;
}