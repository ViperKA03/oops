#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,3};
    int *ptr=arr;
   ++ptr;
   cout<<*ptr;
    return 0;
}