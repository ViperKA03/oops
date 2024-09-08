#include <iostream>
using namespace std;
//  here derived class show overrides base class show
// and base class show is overridden by derived class show
class Base{
    //this class becomes an abstract base class now as it is created to get its methods overridden by another derived class methods
    // if we give virtual void show =0 , this function will become pure virtual function and a class which has a pure virtual function is 
    //  definetly a abstract class but vice versa is not true 
    // if the function is pure virtual function, it must have a method in derive with same name to override
    public:
    int var_base=1;
     virtual void  show()=0;
  
};
class Derived: public Base{
    public:
    int var_der=2;
    void show()
    {   cout<< "In der "<<var_base<<endl;
        cout<<"In der"<<var_der<<endl;
    }
};
int main()
{
    Base *p;
    Derived obj;
    p=&obj;
    p->show();
    return 0;
}