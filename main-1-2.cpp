#include <iostream>
#include "Person.h"
using namespace std;

int main(){

    
    Person a(0, "Kosta"), b(20000, "Dylan"), c(19000, "Nate"), d(10000, "Michael");

    
    b.setName("Jiyoon");
    c.setName("Divya");
    d.setName("Lachlan");

    a.setSalary(20000);
    b.setSalary(18000);
    c.setSalary(10000);
    
    cout << a.getName() << a.getSalary() << endl << b.getName() << b.getSalary() << endl << c.getName() << c.getSalary() << endl << d.getName() << d.getSalary() << endl; 
}