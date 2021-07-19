#pragma once
#include "ComportamentoBruxo.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class LancarGranada : public ComportamentoBruxo {

public:
    void lancarMagia(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 17);
        cout << "lancou Granada... " << endl;
    }
};