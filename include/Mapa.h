#ifndef MAPA_H
#define MAPA_H

#include <iostream>

typedef struct mapa{
    char nome[100];
    char geografia[5][5]; // O OCUPADO, D DISPONIVEL
}_mapa;

mapa iniciaMapa();
void printaMapa(_mapa mapa);
#endif // MAPA_H
