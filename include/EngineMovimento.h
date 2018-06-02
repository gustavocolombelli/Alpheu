#ifndef ENGINEMOVIMENTO_H
#define ENGINEMOVIMENTO_H

#include <Windows.h>

#define CIMA 'W'
#define BAIXO 'S'
#define ESQUERDA 'A'
#define DIREITA 'D'

typedef struct movimentoRealizado
{
    int x;
    int y;

}_movimentoRealizado;

_movimentoRealizado capturaComandoMovimento();
#endif // MOVIMENTO_H
