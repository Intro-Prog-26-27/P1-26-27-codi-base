#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool ordinador_vol_dau(int punts_actuals);
int determinar_guanyador_daus(int punts_ord, int punts_usr);

int main() {
    assert(ordinador_vol_dau(8) == true);   //  13 - 8 = 5 (>3)
    assert(ordinador_vol_dau(10) == false); //  13 - 10 = 3 ( > 3 false)

    assert(determinar_guanyador_daus(11, 14) == 1); // usuari es passa
    assert(determinar_guanyador_daus(14, 12) == 2); // ordinador es passa
    assert(determinar_guanyador_daus(14, 15) == 0); // tots dos es passen
    assert(determinar_guanyador_daus(11, 12) == 2); // usuari més a prop
    assert(determinar_guanyador_daus(12, 11) == 1); // ordinador més a prop
    assert(determinar_guanyador_daus(10, 10) == 1); // empat, guanya l'ordinado
    printf("Tests de TiraDaus passats correctament!\n");
    return 0;
}
