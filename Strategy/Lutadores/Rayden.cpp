#include "Lutador.h"
#include "../Comportamentos/AtirarNada.cpp"
#include "../Comportamentos/LancarRaio.cpp"

class Rayden : public Lutador {
public:
    Rayden() : Lutador() {
        this->nome = "Rayden";
        this->atirador = new AtirarNada();
        this->bruxo = new LancarRaio();
    }
};