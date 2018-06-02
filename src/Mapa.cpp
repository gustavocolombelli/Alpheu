#include "Mapa.h"


mapa iniciaMapa(){
    _mapa mapa;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            mapa.geografia[i][j] = '#';
    }

    return mapa;
};

void printaMapa(_mapa mapa){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            std::cout << mapa.geografia[i][j];
        std::cout << std::endl;
    }
};
