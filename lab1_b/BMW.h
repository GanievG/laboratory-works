#ifndef BMW_H
#define BMW_H

#include <string>
#include "Car.h"

class BMW : public Car {
public:

    BMW(const std::string& company_, const std::string& model_);
    
    virtual ~BMW();

    //virtual std::string getModel() const override;
};

#endif // !BMW_H