#ifndef MERCEDES_H
#define MERCEDES_H

#include <string>
#include "Car.h"

class Mercedes : public Car {
public:
    
    Mercedes(const std::string& company_, const std::string& model_);

    ~Mercedes();

    //virtual std::string getModel() const override;
};

#endif // !MERCEDES_H