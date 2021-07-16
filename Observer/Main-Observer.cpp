// PES.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Subject/Editora.cpp"
#include "Observer/Pessoa.cpp"

void publicarRevista(Editora* edt, string tituloRevista) {
    getchar();      //espera um enter
    cout << edt->getNome() + " publica a Revista com título: \"" + tituloRevista + "\"" << endl;
    edt->publicarNovaRevista(tituloRevista);
    cout << endl << endl;
}

int main()
{
    Editora* veja = new Editora("Veja");
    Editora* istoEh = new Editora("IstoEh");

    cout << "Observadores com id par assinarao a Veja" << endl;
    cout << "Observadores com id impar assinarao a IstoEh" << endl;
    cout << endl << endl;

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            Pessoa *p = new Pessoa("Fulano de tal " + to_string(i));
            p->assinar(veja);
        }
        else {
            Pessoa* p = new Pessoa("Sicrano " + to_string(i));
            p->assinar(istoEh);
        }
    }

    string tituloRevista = "Mortalidade por Covid-19 cai 46% em SP";
    publicarRevista(veja, tituloRevista);

    tituloRevista = "Camara aprova regras para impedir supersalarios no servico publico";
    publicarRevista(istoEh, tituloRevista);


    getchar();      //espera um enter
    cout << "Digite um valor qualquer para fazer com que pessoas que tenha ids com múltiplo desse valor cancelem sua assinatura: ";
    int multiplo;
    cin >> multiplo;

    for (int i = 0; i < 100; i++) {
        Pessoa* p = NULL;
        if (i % multiplo == 0 && i % 2 == 0) {
            p = new Pessoa("Fulano de tal " + to_string(i));
            p->assinar(veja);
        }
        else if (i % multiplo == 0 && i % 2 == 0) {
            p = new Pessoa("Sicrano " + to_string(i));
            p->assinar(istoEh);
        }
        
        if (p != NULL) {
            p->cancelarAssinatura();
            cout << "Pessoa com nome " + p->getId() + " cancelou a assinatura " << endl << endl;
        }
    }

    tituloRevista = "Italia vai testar voto eletronico em suas eleicoes";
    publicarRevista(veja, tituloRevista);

    tituloRevista = "Fluminense e Atletico Mineiro empatam por 1 a 1 pelo Brasileirao sub-20; Edinho marca no ultimo lance";
    publicarRevista(istoEh, tituloRevista);
}