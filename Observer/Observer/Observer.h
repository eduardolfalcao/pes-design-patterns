#pragma once
#include <string>

template <typename T>
class Subject;

template <typename T>
class Observer {
public:
    string id;

    virtual void assinar(Subject<T>* subject);
    virtual void cancelarAssinatura();
    virtual void atualizar();

protected:
    Subject<T>* subject;
    T info;
};