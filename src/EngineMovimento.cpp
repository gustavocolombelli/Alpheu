#include "EngineMovimento.h"

_movimentoRealizado capturaComandoMovimento(){

    _movimentoRealizado movimento;
    movimento.x = movimento.y = 0;

    if((GetKeyState(CIMA)< 0 && GetKeyState(BAIXO) < 0) || (GetKeyState(DIREITA)< 0 && GetKeyState(ESQUERDA) < 0)){
        return movimento;
    }
    //Movimentos verticais ----------------
    else if(GetKeyState(CIMA)< 0)
    {

        movimento.y = 1;

        if(GetKeyState(DIREITA) < 0){
            movimento.x = 1;
        }
        else if(GetKeyState(ESQUERDA) < 0){

            movimento.x = -1;
        }
    }
    else if(GetKeyState(BAIXO)< 0)
    {
        movimento.y = -1;

        if(GetKeyState(DIREITA) < 0){
            movimento.x = 1;
        }
        else if(GetKeyState(ESQUERDA) < 0){
            movimento.x = -1;
        }
    }
    //Movimentos horizontais ----------------
    else if(GetKeyState(DIREITA)< 0)
    {
        movimento.x = 1;

        if(GetKeyState(CIMA) < 0){
            movimento.y = 1;
        }
        else if(GetKeyState(BAIXO) < 0){
            movimento.y = -1;
        }
    }
    else if(GetKeyState(ESQUERDA)< 0)
    {
        movimento.x = -1;
        if(GetKeyState(CIMA) < 0){
            movimento.y = 1;
        }
        else if(GetKeyState(BAIXO) < 0){
            movimento.y = -1;
        }
    }
    return movimento;
}
