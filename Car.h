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
    void set_vinNumber(int vN);
    void set_emissions(int em);

    virtual void drive(int kms);
    int get_emissions();
    int get_price();
    int get_vinNumber();


};

#endif