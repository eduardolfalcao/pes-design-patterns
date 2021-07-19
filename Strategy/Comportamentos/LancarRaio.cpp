#pragma once
#include "ComportamentoBruxo.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class LancarRaio : public ComportamentoBruxo {

public:
    void lancarMagia(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 18);
        cout << "lancou Raio... " << endl;
    }
};