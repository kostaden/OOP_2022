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

    void set_price(int p);
    int get_price();

    void set_vinNumber(int vN);
    int get_vinNumber();

    void set_emissions(int em);
    int get_emissions();
   
    
    virtual void drive(int kms) = 0;


};

#endif