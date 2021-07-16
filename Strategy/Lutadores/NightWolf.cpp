#include "Lutador.h"
#include "../Comportamentos/AtirarComArcoEFlecha.cpp"
#include "../Comportamentos/LancarRaio.cpp"

class NightWolf : public Lutador {
public:
    NightWolf() : Lutador() {
        this->nome = "NightWolf";
        this->atirador = new AtirarComArcoEFlecha();
        this->bruxo = new LancarRaio();
    }
};