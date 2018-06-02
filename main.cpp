#include <iostream>
#include <thread>

#include "EngineMovimento.h"
#include "Mapa.h"

using namespace std;

void orientacao(){
    _mapa mapa1 = iniciaMapa();
    printaMapa(mapa1);
    _movimentoRealizado movimento;
    while(true){

        if(GetKeyState(CIMA) < 0 || GetKeyState(BAIXO) < 0  || GetKeyState(ESQUERDA) < 0 || GetKeyState(DIREITA) < 0 ){
            movimento = capturaComandoMovimento();
            printf("X:%d Y:%d\n", movimento.x, movimento.y);
        }
    }
}

void habilidade()
{
    while(true){
        if(GetKeyState('1') < 0 || GetKeyState('2') < 0 || GetKeyState('3') < 0 || GetKeyState('4') < 0 || GetKeyState('5') < 0 || GetKeyState('Q') < 0 || GetKeyState('E') < 0 ){
            printf("Skill solta\n");
        }
    }
}

void inicia()
{

    std::thread first(orientacao);
    //std::thread second(habilidade);

    first.join();
    //second.join();
}


int main()
{
    inicia();
    return 0;
}
