#ifndef NIM_H
#define NIM_H

#include <stdbool.h>

// Valida si la jugada compleix les regles: entre 1 i 3, i no més de les que queden
bool moviment_valid(int agafades, int restants);

// Retorna el guanyador: 1 si guanya J1, 2 si guanya J2, 0 si la partida continua
int comprovar_fi_partida(int restants, int torn_actual);

#endif // NIM_H
