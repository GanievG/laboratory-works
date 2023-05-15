#include "A.h"
#include<iostream>
using namespace std;
A::A() {
    cout << "Конструктор по умолчанию класса А" << endl;
    s = new string();
}

A::A(const char* a) {
    s = new string(a);
    cout << "Пользовательский Конструктор класса A" << endl;
    cout << *s << endl;
}

A:: ~A() {
    cout << "Деструктор класса A" << endl;
    cout << typeid(*this).name() << endl;
    delete s;
}