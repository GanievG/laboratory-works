#pragma once
#ifndef _CAR_H_
#define _CAR_H_

#include<string>

class Car 
{
public:

    Car(const std::string& company_, const std::string& model_);
    Car() = default;

    /*const std::string& getModel() const;
    const std::string& getCompany() const;*/

    virtual ~Car(); 

protected:
    std::string model;
    std::string company;
};

#endif // !_CAR_H_

    //Car(const std::string& model_);
    //const std::string& getCompany() const;
    /*Car& operator=(const Car&) = default;

    Car(const Car&) = default;

    Car& operator=(Car&& car) noexcept = default;

    Car(Car&& car) noexcept = default; */ //- на всякий случай

    //~Car():Car(const std::string& company_, const std::string& model_);
    //std::string company;

