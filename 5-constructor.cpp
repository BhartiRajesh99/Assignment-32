#include<iostream>
using namespace std;
class A
{
    public:
        //A() { cout<<"DC of A\n"; }
        A(int a) { cout<<"PC of A\n"; }
        A(A &d) { cout<<"CC of A\n"; }
};
class B:public A
{
    public:
        B():A(8)
        {
            cout<<"DC of B\n";
        }

};
int main()
{
    B s;
    return 0;
}