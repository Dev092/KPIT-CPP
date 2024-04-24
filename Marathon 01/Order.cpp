#include "Order.h"
#include <iostream>

int Order::count;
Order::Order() : orderId(1), orderValue(987), discount(99)
{
    count++;
}

Order::Order(int oId, double oValue, double dis, enum OrderType ot)
    : orderId(oId), orderValue(oValue), discount(dis), otype(ot)
{
    count++;
}

void Order::Display()
{
    std::cout << "Order Id=" << orderId << " " << std::endl;
    std::cout << "Order value=" << orderValue << " " << std::endl;
}

void Order::orderStatus()
{
    std::cout << "Number of order placed: " << count << std::endl;
}

Order::~Order()
{
}
