#include <stdio.h>
#include <assert.h>

#include "../../../src/enums/ex14/pedra_paper_tisores.h"

//resultat determinar_guanyador(Jugada j1, Jugada j2);
//typedef enum { PEDRA, PAPER, TISORES } Jugada;
//typedef enum { EMPAT, GUANYA_J1, GUANYA_J2 } Resultat;

int main(void) {

    /* Empats */
    assert(determinar_guanyador(PEDRA, PEDRA) == EMPAT);
    assert(determinar_guanyador(PAPER, PAPER) == EMPAT);
    assert(determinar_guanyador(TISORES, TISORES) == EMPAT);

    /* Guanya el jugador 1 */
    assert(determinar_guanyador(PEDRA, TISORES) == GUANYA_J1);
    assert(determinar_guanyador(PAPER, PEDRA) == GUANYA_J1);
    assert(determinar_guanyador(TISORES, PAPER) == GUANYA_J1);

    /* Guanya el jugador 2 */
    assert(determinar_guanyador(PEDRA, PAPER) == GUANYA_J2);
    assert(determinar_guanyador(PAPER, TISORES) == GUANYA_J2);
    assert(determinar_guanyador(TISORES, PEDRA) == GUANYA_J2);

    printf("Tests de Pedra, Paper, Tisores passats correctament!\n");

    return 0;
}
