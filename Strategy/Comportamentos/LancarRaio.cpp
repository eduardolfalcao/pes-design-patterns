#pragma once
#include "Bruxo.h"
#include "../Lutadores/Lutador.h"

class LancarRaio : public Bruxo {

public:
    void lancarMagia(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 18);
    }
};