#pragma once
using namespace std;
#include<string>

class Conector3Pinos {
public:
	Conector3Pinos(string descricao);
	string getDescricao();
protected: 
	string descricao;
};