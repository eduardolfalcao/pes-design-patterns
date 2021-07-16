#pragma once
#include "../Tomadas/Tomada3Pinos.h"
#include "../Conectores/Conector2Pinos.h"

//Adaptador de Objeto (basta usar composicao)
//conecta conectores de 2 Pinos em Tomadas de 3Pinos
//poderíamos ter um outro adaptador para conectores de 3 Pinos em Tomadas de 2Pinos
class AdaptadorO2Pinos3Pinos {
public:
    AdaptadorO2Pinos3Pinos(Tomada3Pinos* tomada3);
    void conectar(Conector2Pinos* conector);
private:
    Tomada3Pinos* tomada3;
};