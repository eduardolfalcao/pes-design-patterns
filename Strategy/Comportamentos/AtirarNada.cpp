#pragma once
#include "ComportamentoDeAtirar.h"
#include "../Lutadores/Lutador.h"

class AtirarNada : public ComportamentoDeAtirar {

public:
    void atirar(Lutador* lut) {
        //atira nada
    }
};