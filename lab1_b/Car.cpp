#include "Car.h"
#include<iostream>


Car::Car(const std::string& company_, const std::string& model_):company(company_), model(model_) {}

Car::~Car() 
{
    std::cout << "�������� ����������, ����� ���������� = " << company << ", ������ = " << model << std::endl;
}
//Car::Car(const std::string& model_):model(model_) {}

//const std::string& Car::getCompany() const 
//{
//    return company;
//}
//
//const std::string& Car::getModel() const 
//{
//    return model;
//}
