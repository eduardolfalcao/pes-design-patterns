using namespace std;
#include <iostream>
#include <string>
#include "../Subject/Subject.h"
#include "Observer.h"
#include "Observer.cpp"

class Pessoa : public Observer<string> {
public:
    Pessoa(string id) {     // Constructor
        this->id = id;
    }

    void atualizar() override {
        Observer::atualizar();
        cout << toString() << endl;
    }

    string getId() {
        return id;
    }

    string toString() {
        return "Pessoa: " + this->id + " - Revista do Mes: " + this->info;
    }

};