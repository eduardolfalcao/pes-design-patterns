#include "Lutador.h"
#include "../Comportamentos/AtirarNada.cpp"
#include "../Comportamentos/LancarBolaDeGelo.cpp"

class SubZero : public Lutador {
public:
    SubZero() : Lutador() {
        this->nome = "SubZero";
        this->atirador = new AtirarNada();
        this->bruxo = new LancarBolaDeGelo();
    }
};