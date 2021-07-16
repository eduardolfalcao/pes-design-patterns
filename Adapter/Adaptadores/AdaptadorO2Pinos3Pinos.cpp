#include "AdaptadorO2Pinos3Pinos.h"

AdaptadorO2Pinos3Pinos::AdaptadorO2Pinos3Pinos(Tomada3Pinos* tomada3) {
	this->tomada3 = tomada3;
}

void AdaptadorO2Pinos3Pinos::conectar(Conector2Pinos* conector) {
	this->tomada3->conectar(new Conector3Pinos(conector->getDescricao()));
}