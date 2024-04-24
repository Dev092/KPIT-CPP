#include "Date.h"

Date::Date() : day(9), month(2), year(2015)
{
}
Date::Date(int d, int m, int y)
{
    validateAndSetDate(d, m, y);
}

std::ostream &operator<<(std::ostream &os, const Date &obj)
{
    os<<obj.day<<" "<<obj.month<<" "<<obj.year<<std::endl;
    return os;
}


void Date::validateAndSetDate(int d, int m, int y)
{
    if(d<0 && d>31)
    {
        throw std::runtime_error("Enter valid input");
    }
    if(m<0 && m>12)
    {
        throw std::runtime_error("Enter valid input");
    }
    day=d;
    month=m;
    year=y;
    
    
}