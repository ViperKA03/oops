#include <iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"In class A cons"<<endl;
    }
    ~A(){
        cout<<"In class A desc"<<endl;
    
    }
};
class B{
    public:
    B()
    {
        cout<<"in class b cons"<<endl;
    }
    ~B()
    {
        cout<<"in class b desc"<<endl;
    }
};
class C: public A, public B{
    public:
    C()
    {
        cout<<"in class c cons"<<endl;
    }
    ~C()
    {
        cout<<"in class c desc"<<endl;
    }
};
int main()
{
    C b;
    return 0;
}