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

    void atualizar(string info) override {
        Observer::atualizar(info);
        cout << toString() << endl;
    }

    string toString() {
        return "Pessoa: " + this->id + " - Revista do Mes: " + this->info;
    }

};