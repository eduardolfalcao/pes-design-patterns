#pragma once
#include "Atirador.h"
#include "../Lutadores/Lutador.h"

class AtirarComArmaDeFogo : public Atirador {

public:
    void atirar(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 19);
    }
};