#include <iostream>
using namespace std;
class Emp{
     int id=1;
    public:
    void show()
    {
        cout<<id++<<" ";
    }
};

int main()
{
    Emp e1,e2,e3;
    e1.show();
    e2.show();
    e3.show();
    return 0;
}