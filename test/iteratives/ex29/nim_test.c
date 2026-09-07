#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool moviment_valid(int agafades, int restants);
int comprovar_fi_partida(int restants, int torn_actual);

int main() {
    // Tests de validació de moviments
    assert(moviment_valid(2, 20) == true);
    assert(moviment_valid(4, 20) == false); // no es poden agafar més de 3
    assert(moviment_valid(0, 20) == false); // s'ha d'agafar almenys 1
    assert(moviment_valid(2, 1) == false);  // no pots agafar més fitxes de les que queden
    assert(moviment_valid(1, 1) == true); //agafar les que queden 

    // Tests de condició de victòria (si queden 0 fitxes, perd qui acaba de jugar)
    assert(comprovar_fi_partida(0, 1) == 2); // si el J1 deixa 0 fitxes -> Guanya el J2
    assert(comprovar_fi_partida(0, 2) == 1); // si el J2 deixa 0 fitxes -> Guanya el J1
    assert(comprovar_fi_partida(5, 1) == 0); // si queden fitxes, la partida continua (0)
    assert(comprovar_fi_partida(1, 2) == 0); // queda una fitxa, la partida continua
    printf("Tests de Nim passats correctament!\n");
    return 0;
}
