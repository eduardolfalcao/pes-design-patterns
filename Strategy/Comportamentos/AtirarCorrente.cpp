#pragma once
#include "ComportamentoDeAtirar.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class AtirarCorrente : public ComportamentoDeAtirar {

public:
    void atirar(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 15);
        cout << "usando Corrente... " << endl;
    }
};