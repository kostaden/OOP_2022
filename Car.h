#ifndef Car_H
#define Car_H
using namespace std;

class Car{

    protected:
    
    int price;
    int vinNumber;
    int emissions = 0;

    public:

    Car();
    Car(int price);

    void set_price(int price);
    void set_vinNumber(int vinNumber);

    virtual void drive(int kms);
    int get_price();
    int get_vinNumber();


};

#endif