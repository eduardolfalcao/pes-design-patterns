#include "Lutador.h"
#include "../Comportamentos/AtirarCorrente.cpp"
#include "../Comportamentos/LancarBolaDeFogo.cpp"

class Scorpion : public Lutador {
public:
    Scorpion() : Lutador() {
        this->nome = "Scorpion";
        this->atirador = new AtirarCorrente();
        this->bruxo = new LancarBolaDeFogo();
    }
};