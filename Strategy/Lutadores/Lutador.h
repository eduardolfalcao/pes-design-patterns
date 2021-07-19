#pragma once
#include <string>

class ComportamentoDeAtirar;
class ComportamentoBruxo;

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

    void setAtirador(ComportamentoDeAtirar* atirador);
    void setBruxo(ComportamentoBruxo* bruxo);

protected:
    int vida;
    string nome;

    ComportamentoDeAtirar* atirador;
    ComportamentoBruxo* bruxo;

private:
    void msgAtaque(string ataque, Lutador* lutador);
};