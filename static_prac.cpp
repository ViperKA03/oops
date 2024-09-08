#include <iostream>
using namespace std;
class Emp{
    static int id;
    public:
    void show()
    {
        cout<<id++<<" ";
    }
};
int Emp:: id;
int main()
{
    Emp e1,e2,e3;
    e1.show();
    e2.show();
    e3.show();
    return 0;
}