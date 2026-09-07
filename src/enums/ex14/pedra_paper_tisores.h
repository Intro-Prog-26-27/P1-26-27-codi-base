#ifndef PEDRA_PAPER_TISORES_H
#define PEDRA_PAPER_TISORES_H

typedef enum { PEDRA, PAPER, TISORES } Jugada;
typedef enum { EMPAT, GUANYA_J1, GUANYA_J2 } Resultat;

Resultat determinar_guanyador(Jugada j1, Jugada j2);

#endif
