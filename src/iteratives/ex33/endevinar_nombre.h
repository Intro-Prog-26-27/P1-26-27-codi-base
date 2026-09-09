#ifndef ENDEVINAR_NOMBRE_H
#define ENDEVINAR_NOMBRE_H

#include <stdbool.h>

bool es_rang_valid(int num);

// Retorna 0 si és correcte, 1 si el secret és major, -1 si el secret és menor
int avaluar_intent(int secret, int intent);

#endif // ENDEVINAR_NOMBRE_H
