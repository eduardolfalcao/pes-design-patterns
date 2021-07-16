#pragma once
#include "Atirador.h"
#include "../Lutadores/Lutador.h"

class AtirarNada : public Atirador {

public:
    void atirar(Lutador* lut) {
        //atira nada
    }
};