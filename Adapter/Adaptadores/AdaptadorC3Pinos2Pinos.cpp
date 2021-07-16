#include "AdaptadorC3Pinos2Pinos.h"

void AdaptadorC3Pinos2Pinos::conectar(Conector3Pinos* conector) {
	Tomada2Pinos::conectar(new Conector2Pinos(conector->getDescricao()));
}