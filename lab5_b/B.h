#pragma once
#include "A.h"
class B : public A {
public:
    B() {
        cout << "�����������  ������ B" << endl;
    }

    B(const char* a) :A(a) {
        cout << "���������������� ����������� ������ B" << endl;
        cout << *s << endl;
    }

    ~B() {
        cout << "���������� ������ B" << endl;
        cout << typeid(*this).name() << endl;
    }
};

