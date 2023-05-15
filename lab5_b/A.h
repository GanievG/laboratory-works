#pragma once
#include<string>
class A {
public:
    std::string* s;
    A();

    A(const char* a);

    virtual ~A();
};

