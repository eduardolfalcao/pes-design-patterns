#pragma once

class Lutador;

class Atirador {
public:
    virtual void atirar(Lutador* l) = 0;
};