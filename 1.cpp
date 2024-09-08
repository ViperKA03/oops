#include <iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
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
    friend void   add(Complex a,Complex b);
    void show() {cout<<"real "<<real<<"+"<<imaginary<<"i"<<endl;
    
}};
void  add(Complex a, Complex b)
{
    cout<<a.real+b.real<<" "<<a.imaginary+b.imaginary;

}

int main(int argc, char const *argv[])
{
    /* code */
    Complex a(2,3), b(3,4),
     c(a);

    a.show();
    b.show();
     c.show();

   
    return 0;
}
