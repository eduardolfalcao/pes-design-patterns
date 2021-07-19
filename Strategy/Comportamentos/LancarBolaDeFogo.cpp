#pragma once
#include "ComportamentoBruxo.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class LancarBolaDeFogo : public ComportamentoBruxo {

public:
    void lancarMagia(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 16);
        cout << "lancou Bola de Fogo... " << endl;
    }
};