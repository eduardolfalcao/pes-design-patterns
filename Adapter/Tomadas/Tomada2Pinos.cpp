#include "Tomada2Pinos.h"
#include <iostream>
using namespace std;

void Tomada2Pinos::conectar(Conector2Pinos* conector) {
	cout << conector->getDescricao() + " carregando em uma tomada de dois pinos..." << endl;
}