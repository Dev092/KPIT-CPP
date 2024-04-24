#ifndef INVENTORY_H
#define INVENTORY_H

#include<string>
enum productType
{
    ACCESSORIES=1,
    SHOPPING
};
class Inventory{
    std::string descriptionOfProduct;
    int balanceStock;
    int productCode;
    
    static int count;
    public:
    enum productType ptype;
    Inventory();
    
    Inventory(std::string des,int bal,int pCode,enum productType pt);
    void purchaseProduct(int n);
    void saleProduct(int n);
    
    void display();

    std::string getDescriptionOfProduct() const { return descriptionOfProduct; }
    void setDescriptionOfProduct(const std::string &descriptionOfProduct_) { descriptionOfProduct = descriptionOfProduct_; }

    int getBalanceStock() const { return balanceStock; }
    void setBalanceStock(int balanceStock_) { balanceStock = balanceStock_; }

    int getProductCode() const { return productCode; }
    void setProductCode(int productCode_) { productCode = productCode_; }

    enum productType getPtype() const { return ptype; }
    void setPtype(const enum productType &ptype_) { ptype = ptype_; }

    static int getCount() { return Inventory::count; }
    static void setCount(int count) { Inventory::count = count; }


};

#endif // INVENTORY_H
