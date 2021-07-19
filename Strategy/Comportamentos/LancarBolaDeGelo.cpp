#pragma once
#include "ComportamentoBruxo.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class LancarBolaDeGelo : public ComportamentoBruxo {

public:
    void lancarMagia(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 14);
        cout << "lancou Bola de Gelo... " << endl;
    }
};