#ifndef TIRA_DAUS_H
#define TIRA_DAUS_H

#include <stdbool.h>

// L'ordinador demana daus si la diferència amb 13 és major que 3
bool ordinador_vol_dau(int punts_actuals);

// Retorna 1 si guanya l'ordinador, 2 si guanya l'usuari, 0 si cap dels dos
int determinar_guanyador_daus(int punts_ord, int punts_usr);

#endif // TIRA_DAUS_H
