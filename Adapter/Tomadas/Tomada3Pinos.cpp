#include "Tomada3Pinos.h"
#include <iostream>
using namespace std;

void Tomada3Pinos::conectar(Conector3Pinos* conector) {
	cout << conector->getDescricao() + " carregando em uma tomada de tres pinos..." << endl;
}