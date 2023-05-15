#include "B.h"
#include<iostream>
using namespace std;
B::B() {
    cout << "Конструктор  класса B" << endl;
}

B::B(const char* a) :A(a) {
    cout << "Пользовательский Конструктор класса B" << endl;
    cout << *s << endl;
}

B::~B() {
    cout << "Деструктор класса B" << endl;
    cout << typeid(*this).name() << endl;
}