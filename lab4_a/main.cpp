
#include"Header.h"
// Колличество совподает

int main() {
    Database db;
    setlocale(LC_ALL, "ru");
    SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);

    std::ifstream file("input.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::stringstream ss(line);//stringstream
            std::string name;
            int birthYear;
            std::string position;
            std::string department;

            ss >> name >> birthYear >> position >> department;

            Employee* e = new Employee(name, birthYear, position, department);
            db.addEmployee(e);
        }
        file.close();
    }
    db.printAllEngineers();
    std::cout << std::endl;
    db.printAllNonPresidents();

    
    return 0;
}
