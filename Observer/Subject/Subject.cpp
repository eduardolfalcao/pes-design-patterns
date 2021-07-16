#include "Subject.h"
#include "../Observer/Observer.h"

template <typename T>
void Subject<T>::assinar(Observer<T>* obs) {
    bool jaAssinou = (std::find(observadores.begin(), observadores.end(), obs) != observadores.end());
    if(!jaAssinou)
        observadores.push_back(obs);
}

template <typename T>
void Subject<T>::cancelarAssinatura(Observer<T>* obs) {
    typename list<Observer<T>*>::const_iterator it = observadores.cbegin();
    while (it != observadores.cend()){
        if ((*it)->getId() == obs->getId()) {
            it = observadores.erase(it);
        }
        else {
            ++it;
        }
    }
}

//pull model
/*template <typename T>
void Subject<T>::notificarObservadores(){
    typename list<Observer<T> *>::iterator it = observadores.begin();
    while (it != observadores.end()) {
        (*it)->atualizar();
        ++it;
    }
}*/

//push model
template <typename T>
void Subject<T>::notificarObservadores(){
    typename list<Observer<T> *>::iterator it = observadores.begin();
    while (it != observadores.end()) {
        (*it)->atualizar(this->info);
        ++it;
    }
}