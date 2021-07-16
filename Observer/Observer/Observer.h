#pragma once
#include <string>

template <typename T>
class Subject;

template <typename T>
class Observer {
public: 

    virtual void assinar(Subject<T>* subject);
    virtual void cancelarAssinatura();
    virtual void atualizar(T info);
    virtual string getId();

protected:
    Subject<T>* subject;
    T info;
    string id;
};