#pragma once
#include <string>
using namespace std;

class Conector2Pinos {
public:
	Conector2Pinos(string descricao);
	string getDescricao();
protected: 
	string descricao;
};