#pragma once
#include "Atirador.h"
#include "../Lutadores/Lutador.h"

class AtirarComArcoEFlecha : public Atirador {

public:
    void atirar(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 15);
    }
};