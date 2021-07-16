#include "Conector2Pinos.h"

Conector2Pinos::Conector2Pinos(string descricao) {
	this->descricao = descricao;
}

string Conector2Pinos::getDescricao() {
	return descricao;
}