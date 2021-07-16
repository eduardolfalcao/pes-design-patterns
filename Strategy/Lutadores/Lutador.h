#pragma once
#include <string>

class Atirador;
class Bruxo;

using namespace std;

class Lutador {
public:
    Lutador();

    void socar(Lutador* l);
    void chutar(Lutador* l);
    virtual void atirar(Lutador* l);
    virtual void lancarMagia(Lutador* l);
    
    int getVida();
    void setVida(int vida);
    string getNome();

    string toString();

protected:
    int vida;
    string nome;

    Atirador* atirador;
    Bruxo* bruxo;

private:
    void msgAtaque(string ataque, Lutador* lutador);
};