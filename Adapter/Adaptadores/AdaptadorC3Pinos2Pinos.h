#pragma once
#include "../Tomadas/Tomada2Pinos.h"
#include "../Conectores/Conector3Pinos.h"

//Adaptador de classe (basta usar heranca multipla)
//conecta conectores de 3 Pinos em Tomadas de 2Pinos
//poderíamos ter um outro adaptador para conectores de 2 Pinos em Tomadas de 3Pinos 
class AdaptadorC3Pinos2Pinos : public Tomada2Pinos{
public:
    void conectar(Conector3Pinos* conector);
};