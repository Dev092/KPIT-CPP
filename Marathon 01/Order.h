#ifndef ORDER_H
#define ORDER_H
enum OrderType
{
    MARKET = 1,
    LIMIT,
    STOP
};

class Order
{
    int orderId;
    double orderValue;
    double discount;
    
    static int count;
    public:
    enum OrderType otype;//{MARKET=1,LIMIT,STOP};
    Order();
    Order(int oId,double oValue,double dis,enum OrderType ot );
    void Display();
    static void orderStatus();
    ~Order();
    

    int getOrderId() const { return orderId; }
    void setOrderId(int orderId_) { orderId = orderId_; }

    double getOrderValue() const { return orderValue; }
    void setOrderValue(double orderValue_) { orderValue = orderValue_; }

    double getDiscount() const { return discount; }
    void setDiscount(double discount_) { discount = discount_; }

    enum OrderType getOtype() const { return otype; }
    void setOtype(const enum OrderType &otype_) { otype = otype_; }


};

#endif // ORDER_H
