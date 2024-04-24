#include "Address.h"
#include<iostream>
Address::Address():cityName("Samastipur"),pinCode(848101){}

Address::Address(std::string c, int pc)
:cityName(c),pinCode(pc){}

void Address::display()
{
    std::cout<<cityName<<" "<<pinCode<<std::endl;
}
