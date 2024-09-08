#include <iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
    Complex(){}
    Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    Complex(Complex & a)
    {
    real=a.real;
        imaginary=a.imaginary;
    }
   
    void show() 
    {cout<<"real "<<real<<"+"<<imaginary<<"i"<<endl;
    
}
    friend Complex operator +(Complex &a, Complex &b);
};
Complex operator + (Complex &a, Complex &b)
{
    Complex temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
    return temp;

}
int main()
{
    Complex a(1,2), b(2,3);
    Complex c;
    c=a+b;
    c.show();
    return 0;

}