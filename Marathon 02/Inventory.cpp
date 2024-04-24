#include "Inventory.h"
#include<iostream>
int Inventory::count;
Inventory::Inventory():descriptionOfProduct("FoodItem"),balanceStock(30),productCode(111){}

Inventory::Inventory(std::string des, int bal, int pCode,enum productType pt)
: descriptionOfProduct(des),balanceStock(bal),productCode(pCode),ptype(pt){}


void Inventory::purchaseProduct(int n)
{
    setBalanceStock(getBalanceStock()+n);
    std::cout<<"After purchase stick:"<<getBalanceStock()<<std::endl;
}

void Inventory::saleProduct(int n)
{
    try{
    if((getBalanceStock()-n) > 20){
    setBalanceStock(getBalanceStock()-n);
    std::cout<<"After sale stock :"<<getBalanceStock()<<std::endl;
    }else 
    {
        throw std::runtime_error("Low stock level\n");
    }
    }catch(std::exception &e){
         std::cout<<"Exception occoured :"<<e.what();
    }
}

void Inventory::display()
{
    std::cout<<productCode<<" "<<descriptionOfProduct<<" "<<balanceStock<<std::endl;
}





