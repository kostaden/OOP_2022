#include <iostream>
#include "Person.h"
using namespace std;

int main(){

    
    Person a(0, "Kosta"), b(20000, "Dylan"), c(19000, "Nate"), d(10000, "Michael");

    
    b.setName("Jiyoon");
    c.setName("Divya");
    d.setName("Lachlan");

    b.setSalary(20000);
    c.setSalary(18000);
    d.setSalary(10000);
    
    cout << a.getName() << a.getSalary() << endl << b.getName() << b.getSalary() << endl << c.getName() << c.getSalary() << endl << d.getName() << d.getSalary() << endl; 
}