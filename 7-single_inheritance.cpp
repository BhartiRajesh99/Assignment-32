#include<iostream>
using namespace std;
class A1
{
    public:
        A1()
        {
            cout<<"DC of A1\n";
        }
        ~A1()
        {
             cout<<"Destructor of A1\n";
        }
};
class B1:public A1
{
    public:
        B1():A1()
        {
            cout<<"DC of B1\n";
        }
        ~B1()
        {
            cout<<"Destructor of B1\n";
        }
};
int main()
{
    B1 b;
    return 0;
}