#include "Lutador.h"
#include "../Comportamentos/Atirador.h"
#include "../Comportamentos/Bruxo.h"
#include <iostream>

Lutador::Lutador() {
    this->vida = 100;
}

void Lutador::socar(Lutador* lutador) {
    int vida = lutador->getVida();
    lutador->setVida(vida - 7);
    this->msgAtaque("socou", lutador);
}

void Lutador::chutar(Lutador* lutador) {
    int vida = lutador->getVida();
    lutador->setVida(vida - 5);
    this->msgAtaque("chutou", lutador);
}

void Lutador::atirar(Lutador* lutador) {    
    atirador->atirar(lutador);
    this->msgAtaque("atirou em", lutador);
}

void Lutador::lancarMagia(Lutador* lutador) {
    bruxo->lancarMagia(lutador);
    this->msgAtaque("lancou magia em", lutador);
}

void Lutador::msgAtaque(string ataque, Lutador* lutador) {
    cout << this->nome + " " + ataque + " " + lutador->getNome() << endl;
}

int Lutador::getVida() {
    return this->vida;
}

void Lutador::setVida(int vida) {
    this->vida = vida;
}

string Lutador::getNome() {
    return this->nome;
}

string Lutador::toString() {
    return this->nome+ " ("+ to_string(this->vida)+")";
}