#include "Lutador.h"
#include "../Comportamentos/AtirarComArmaDeFogo.cpp"
#include "../Comportamentos/LancarGranada.cpp"

class Sonia : public Lutador {
public:
    Sonia() : Lutador() {
        this->nome = "Sonia";
        this->atirador = new AtirarComArmaDeFogo();
        this->bruxo = new LancarGranada();
    }
};