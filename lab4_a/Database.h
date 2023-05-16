#pragma once
#include<vector>
#include"Employee.h"
class Database {
private:
    std::vector<Employee*> employees;
public:
    ~Database();

    void addEmployee(Employee* e);

    void removeEmployee(Employee* e);

    void printAllEngineers();

    void printAllNonPresidents();
};

