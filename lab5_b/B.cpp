#include "B.h"
#include<iostream>
using namespace std;
B::B() {
    cout << "�����������  ������ B" << endl;
}

B::B(const char* a) :A(a) {
    cout << "���������������� ����������� ������ B" << endl;
    cout << *s << endl;
}

B::~B() {
    cout << "���������� ������ B" << endl;
    cout << typeid(*this).name() << endl;
}