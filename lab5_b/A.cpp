#include "A.h"
#include<iostream>
using namespace std;
A::A() {
    cout << "����������� �� ��������� ������ �" << endl;
    s = new string();
}

A::A(const char* a) {
    s = new string(a);
    cout << "���������������� ����������� ������ A" << endl;
    cout << *s << endl;
}

A:: ~A() {
    cout << "���������� ������ A" << endl;
    cout << typeid(*this).name() << endl;
    delete s;
}