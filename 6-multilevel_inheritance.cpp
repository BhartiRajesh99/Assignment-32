#include<iostream>
using namespace std;
class A
{
    public:
        A(int a) 
        {
            cout<<"PC of A\n";
        }
};
class B:public A
{
    public:
        B(int d):A(8)
        {
            cout<<"PC of B\n";
        }
};
class C:public B
{
    public:
        C():B(7)
        {
            cout<<"DC of C\n";
        }
};
int main()
{
    C c1;
    return 0;
}