#include "Employee.h"

Employee::Employee(std::string n, int y, std::string p, std::string d) : name(n), birthYear(y), position(p), department(d) {}

std::string Employee::getName() const 
{
	return name;
}

int Employee::getBirthYear() const 
{
	return birthYear;
}

std::string Employee::getPosition() const 
{
	return position;
}

std::string Employee::getDepartment() const 
{
	return department;
}