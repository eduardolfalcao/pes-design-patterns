#include "Conector3Pinos.h"

Conector3Pinos::Conector3Pinos(string descricao) {
	this->descricao = descricao;
}

string Conector3Pinos::getDescricao() {
	return this->descricao;
}