#include <stdio.h>
#include <assert.h>

int total_asteriscs(int files);

int main() {

    assert(total_asteriscs(1) == 1);   // cas mínim positiu
    assert(total_asteriscs(3) == 6);   // 1 + 2 + 3
    assert(total_asteriscs(5) == 15);  // 1 + 2 + 3 + 4 + 5
    assert(total_asteriscs(1) == 1);   // cas mínim positiu
    assert(total_asteriscs(0) == 0);   // cas límit
    assert(total_asteriscs(-2) == 0);  // valor invàlid

    printf("Tests de TriangleAsteriscs passats correctament!\n");
    return 0;
}
