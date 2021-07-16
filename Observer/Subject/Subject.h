#pragma once
using namespace std;

#include <string>
#include <list>

template <typename T>
class Observer;

template <typename T>
class Subject {
public:

    virtual void assinar(Observer<T>* obs);             //subscribe ou register
    virtual void cancelarAssinatura(Observer<T>* obs);  //unsubscribe
    virtual void notificarObservadores();               //notifyObservers
    //T obterInfo() { return info; }

protected:
    T info;
    list<Observer<T>*> observadores;
};