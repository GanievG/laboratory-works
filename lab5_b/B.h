#pragma once
#include "A.h"
class B : public A {
public:
    B() {
        cout << "Конструктор  класса B" << endl;
    }

    B(const char* a) :A(a) {
        cout << "Пользовательский Конструктор класса B" << endl;
        cout << *s << endl;
    }

    ~B() {
        cout << "Деструктор класса B" << endl;
        cout << typeid(*this).name() << endl;
    }
};

