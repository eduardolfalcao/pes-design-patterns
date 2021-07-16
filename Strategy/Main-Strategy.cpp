#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Lutadores/Lutador.h"
#include "Lutadores/NightWolf.cpp"
#include "Lutadores/Rayden.cpp"
#include "Lutadores/SubZero.cpp"
#include "Lutadores/Sonia.cpp"


Lutador* sorteiaLutador() {
    Lutador* lutador;
    int v = rand() % 100 + 1;
    if (v <= 25) 
        lutador = new NightWolf();
    else if (v <= 50)
        lutador = new Rayden();
    else if (v <= 75)
        lutador = new SubZero();
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

    Lutador* l1 = sorteiaLutador();
    Lutador* l2 = sorteiaLutador();

    int round = 1;
    while (l1->getVida() > 0 && l2->getVida() > 0) {
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