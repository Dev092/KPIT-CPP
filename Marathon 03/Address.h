#ifndef ADDRESS_H
#define ADDRESS_H

#include<string>
#include"Date.h"
class Address{
    std::string cityName;
    int pinCode;
    

    public:
    Address();
    Address(std::string c,int pc);
    void display();

    std::string getCityName() const { return cityName; }
    void setCityName(const std::string &cityName_) { cityName = cityName_; }

};

#endif // ADDRESS_H
