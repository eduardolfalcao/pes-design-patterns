#include "Lutador.h"
#include "../Comportamentos/AtirarNada.cpp"
#include "../Comportamentos/LancarBolaDeFogo.cpp"

class ShangTsun : public Lutador {
public:
    ShangTsun() : Lutador() {
        this->nome = "ShangTsun";
        this->atirador = new AtirarNada();
        this->bruxo = new LancarBolaDeFogo();
    }
};