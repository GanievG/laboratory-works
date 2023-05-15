#pragma once
#include<iostream>
#include<fstream>
#include<string>

class Employee {
private:
    std::string name;
    int birthYear;
    std::string position;
    std::string department;

public:
    Employee(std::string n, int y, std::string p, std::string d);

    std::string getName() const;
    int getBirthYear() const;
    std::string getPosition() const;
    std::string getDepartment() const;
};

