#pragma once
#include "ComportamentoDeAtirar.h"
#include "../Lutadores/Lutador.h"
#include <iostream>

class AtirarComArmaDeFogo : public ComportamentoDeAtirar {

public:
    void atirar(Lutador* lut) {
        int vida = lut->getVida();
        lut->setVida(vida - 19);
        cout << "usando Arma de Fogo... " << endl;
    }
};