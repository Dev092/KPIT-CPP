#include "Order.h"
#include <iostream>
#include <exception>

int maxDiscount(Order obj[], int n)
{
    double maxDis = 0;
    for (int i = 0; i < 3; i++)
    {
        double y=obj[i].getDiscount();
        if ( y > maxDis)
        {
            maxDis=y;
            return maxDis;
        }
    }
    return maxDis;
}

int averageDiscount(Order obj[], int n)
{
    double disSum = 0;
    for (int i = 0; i < 3; i++)
    {
        disSum += obj[i].getDiscount();
    }
    return disSum/n;
}


int main()
{
    try
    {
        int n;
        std::cout << "Enter 1 for MARKET, 2 for LIMIT, 3 for STOP" << std::endl;
        std::cin >> n;
        switch (n)
        {
        case 1:
        {
            Order o1[3];
            o1[0] = Order(1, 450, 28, OrderType::MARKET);
            o1[1] = Order(2, 580, 30, OrderType::MARKET);
            o1[2] = Order(3, 220, 99, OrderType::MARKET);

            o1[0].Display();
            std::cout << "Maximum discount: " << maxDiscount(o1, 3) << std::endl;
            std::cout<<"Average Discount: "<<averageDiscount(o1,3)<<std::endl;
            break;
        }
        case 2:
        {
            Order o1[3];
            o1[0] = Order(1, 450, 28, OrderType::LIMIT);
            o1[1] = Order(2, 580, 30, OrderType::LIMIT);
            o1[2] = Order(3, 220, 99, OrderType::LIMIT);

            o1[0].Display();
            std::cout << "Maximum discount: " << maxDiscount(o1, 3) << std::endl;
            std::cout<<"Average Discount: "<<averageDiscount(o1,3)<<std::endl;

            break;
        }
        case 3:
        {
            Order o1[3];
            o1[0] = Order(1, 450, 28, OrderType::STOP);
            o1[1] = Order(2, 580, 30, OrderType::STOP);
            o1[2] = Order(3, 220, 99, OrderType::STOP);

            o1[0].Display();
            std::cout << "Maximum discount: " << maxDiscount(o1, 3) << std::endl;
            std::cout<<"Average Discount: "<<averageDiscount(o1,3)<<std::endl;
            break;
        }
        default:
            throw std::runtime_error("Enter valid input");
            break;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Exception occoured: " << e.what();
    }
}
