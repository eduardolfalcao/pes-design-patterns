#include "../Subject/Subject.h"
#include "Observer.h"

template <typename T>
void Observer<T>::assinar(Subject<T>* subject) {
    this->subject = subject;
    this->subject->assinar(this);
}

template <typename T>
void Observer<T>::cancelarAssinatura() {
    if(this->subject != NULL){
        this->subject->cancelarAssinatura(this);
    }    
}

template <typename T>
void Observer<T>::atualizar(T info) {
    this->info = info;
}

template <typename T>
string Observer<T>::getId() {
    return this->id;
}