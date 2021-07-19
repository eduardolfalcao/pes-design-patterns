#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Comportamentos/AtirarComArcoEFlecha.cpp"
#include "Comportamentos/LancarRaio.cpp"

#include "Lutadores/Lutador.h"
#include "Lutadores/NightWolf.cpp"
#include "Lutadores/Rayden.cpp"
#include "Lutadores/SubZero.cpp"
#include "Lutadores/Sonia.cpp"
#include "Lutadores/Scorpion.cpp"
#include "Lutadores/ShangTsun.cpp"


Lutador* sorteiaLutador() {
    Lutador* lutador;
    int v = rand() % 100 + 1;
    if (v <= 20) 
        lutador = new NightWolf();
    else if (v <= 40)
        lutador = new Rayden();
    else if (v <= 60)
        lutador = new SubZero();
    else if (v <= 80)
        lutador = new Scorpion();
    else
        lutador = new Sonia();    
    return lutador;
}

pair<Lutador*, Lutador*> sorteiaAtacante(Lutador* l1, Lutador* l2) {
    pair<Lutador*, Lutador*> lutadores;
    int v = rand() % 100 + 1;
    if (v <= 50) {
        lutadores.first = l1;   //first eh o atacante
        lutadores.second = l2;  //second eh quem apanha
    }
    else {
        lutadores.first = l2;
        lutadores.second = l1;
    }
    return lutadores;
}

void golpear(Lutador* atacando, Lutador* apanhando) {
    int v = rand() % 100 + 1;
    if (v <= 25)
        atacando->socar(apanhando);
    else if (v <= 50)
        atacando->chutar(apanhando);
    else if (v <= 75)
        atacando->atirar(apanhando);
    else 
        atacando->lancarMagia(apanhando);
}

int main(){
    srand(time(NULL));

    Lutador* l1 = (Lutador*)(new ShangTsun());
    Lutador* l2 = sorteiaLutador();

    int round = 1;
    while (l1->getVida() > 0 && l2->getVida() > 0) {
        if (round == 5) {
            l1->setAtirador(new AtirarComArcoEFlecha());
            l1->setBruxo(new LancarRaio);
            cout << l1->toString() + "virou NightWolf" << endl;
        }

        cout << "ROUND " + to_string(round) << endl;

        pair<Lutador*, Lutador*> lutadores = sorteiaAtacante(l1, l2);
        golpear(lutadores.first, lutadores.second);
        cout << lutadores.second->toString() << endl;

        round++;
        cout << endl;
    }

    if (l1->getVida() > 0)
        cout << l1->toString() + "venceu!";
    else
        cout << l2->toString() + "venceu!";
}