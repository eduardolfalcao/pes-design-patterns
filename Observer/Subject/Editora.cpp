using namespace std;
#include <string>
#include "Subject.h"
#include "Subject.cpp"

class Editora : public Subject<string> {
public:
    Editora(string nome) {     // Constructor
        this->nome = nome;
    } 

    void publicarNovaRevista(string novaRevista) {
        this->info = novaRevista;
        this->notificarObservadores();
    }

    string getNome() {
        return nome;
    }

    string toString() {
        return "Editora: " + this->nome + " - Revista do Mes: " + this->info;
    }

private:
    string nome;
};