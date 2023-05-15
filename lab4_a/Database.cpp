#include "Database.h"
#include<algorithm>

Database::~Database() {
    for (Employee*& e : employees) {
        delete e;
    }
}

void Database::addEmployee(Employee* e) {
    employees.push_back(e);
}

void Database::removeEmployee(Employee* e) {
    auto it = std::find(employees.begin(), employees.end(), e);
    if (it != employees.end()) {
        employees.erase(it);
        delete e;
    }
}

void Database::printAllEngineers() {
    for (Employee* e : employees) {
        if (e->getPosition() == "инженер") {
            std::cout << e->getName() << ", " << e->getBirthYear() << ", " << e->getPosition() << ", " << e->getDepartment() << std::endl;
        }
    }
}

void Database::printAllNonPresidents() {
    std::vector<Employee*> nonPresidents;

    std::copy_if(employees.begin(), employees.end(), std::back_inserter(nonPresidents), [](Employee* e) {
        return e->getPosition() != "председатель";
        });

    std::sort(nonPresidents.begin(), nonPresidents.end(), [](Employee* e1, Employee* e2) {
        return e1->getBirthYear() < e2->getBirthYear();
        });

    for (Employee* e : nonPresidents) {
        std::cout << e->getName() << ", " << e->getBirthYear() << ", " << e->getPosition() << ", " << e->getDepartment() << std::endl;
    }
}
