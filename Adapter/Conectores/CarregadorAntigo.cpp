#pragma once
#include "Conector2Pinos.h"

class CarregadorAntigo : public Conector2Pinos {
public:
	CarregadorAntigo(string descricao) : Conector2Pinos(descricao){}
};
