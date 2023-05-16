#include "Class1.h"
#include<iostream>

Class1::Class1(const Class1& other) 
{
	this->m_data = other.m_data;
}

Class1& Class1::operator=(const Class1& other)
{
	this->m_data = other.m_data;
	return *this;
}

const int& Class1::getM_DATA() const
{
	return m_data;
}

void Class1::setM_DATA(const int& m_data) 
{
	this->m_data = m_data;
}


Class1::~Class1() {}

//Class1::Class1() {}

//void Class1::print() const { std::cout << "Class1" <<std::endl; }

//Class1* Class1::clone() const { return new Class1(*this); }