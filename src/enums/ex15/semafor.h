#ifndef SEMAFOR_H
#define SEMAFOR_H

typedef enum {
    VERMELL,
    GROC,
    VERD
} ColorSemafor;

ColorSemafor seguent_color(ColorSemafor color);

#endif
