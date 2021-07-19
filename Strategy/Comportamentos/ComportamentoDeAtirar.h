#pragma once

class Lutador;

class ComportamentoDeAtirar {
public:
    virtual void atirar(Lutador* l) = 0;
};