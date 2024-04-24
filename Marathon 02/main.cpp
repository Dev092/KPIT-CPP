#include "Inventory.h"
#include <iostream>

void find(Inventory obj[], int n, productType p)
{
    try{
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (obj[i].getPtype() == p)
        {
            obj[i].display();
            flag=true;
        }
    }
    if(flag==false){
        throw std::runtime_error("Exception");
    }
    }catch(std::exception &e){
        std::cout<<"Product not found"<<std::endl;
    }
}
void find(Inventory obj[], int n, int pCode)
{
    try{
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (obj[i].getProductCode() == pCode)
        {
            obj[i].display();
            flag=true;
        }
    }
    if(flag==false){
        throw std::runtime_error("Exception");
    }
    }catch(std::exception &e){
        std::cout<<"Product not found"<<std::endl;
    }
}
int main()
{
    // Inventory iobj("FoorItem",30,111,productType::ACCESSORIES);
    // iobj.saleProduct(5);
    // iobj.saleProduct(4);
    // iobj.purchaseProduct(10);
    // iobj.saleProduct(25);
    Inventory iarr[3] = {
        {"HouseHold", 100, 50111, productType::SHOPPING},
        {"Electronics", 500, 50112, productType::ACCESSORIES},
        {"Sports", 300, 50113, productType::ACCESSORIES}
    };
    find(iarr,3,50112);
    find(iarr,3,productType::SHOPPING);
    

}