#pragma once

class Lutador;

class ComportamentoBruxo {
public:
    virtual void lancarMagia(Lutador* l) = 0;
};