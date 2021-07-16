#include <iostream>
#include "Conectores/CarregadorNovo.cpp"
#include "Conectores/CarregadorAntigo.cpp"
#include "Conectores/Conector3Pinos.h"
#include "Conectores/Conector2Pinos.h"
#include "Tomadas/Tomada3Pinos.h"
#include "Tomadas/Tomada2Pinos.h"
#include "Adaptadores/AdaptadorC3Pinos2Pinos.h"
#include "Adaptadores/AdaptadorO2Pinos3Pinos.h"

int main(){
    CarregadorNovo* dell = new CarregadorNovo("Carregador Notebook Dell - 3 pinos");
    CarregadorAntigo* asus = new CarregadorAntigo("Carregador Notebook Asus - 2 pinos");

    Tomada3Pinos* tomada3P = new Tomada3Pinos();
    Tomada2Pinos* tomada2P = new Tomada2Pinos();
    
    tomada3P->conectar((Conector3Pinos*)dell);
    tomada2P->conectar((Conector2Pinos*)asus);

    //erro de compilacao
    //cuidado com o cast explicito, pois ele nao dah erro de compilacao
    //tomada2P->conectar(static_cast<Conector2Pinos*>(dell));

    cout << "Carregando carregadores em tomadas incompativeis... (Class Adapter)" << endl;

    AdaptadorC3Pinos2Pinos* adaptadorC = new AdaptadorC3Pinos2Pinos();
    adaptadorC->conectar((Conector3Pinos*)dell);

    cout << "Carregando carregadores em tomadas incompativeis... (Object Adapter)" << endl;
    AdaptadorO2Pinos3Pinos* adaptadorO = new AdaptadorO2Pinos3Pinos(tomada3P);
    adaptadorO->conectar((Conector2Pinos*)asus);

}