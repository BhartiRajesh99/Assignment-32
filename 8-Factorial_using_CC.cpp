#include<iostream>
using namespace std;
class Factorial
{
    private:
        int n,fact=1;
    public:
        Factorial(int x)
        {
            n=x;
        }
        Factorial(Factorial &y)
        {
            n=y.n;
        }
        void calculate()
        {
            for(int i=2;i<=n;i++)
                fact=fact*i;
        }
        void display()
        {
            cout<<"Factorial is "<<fact<<endl;
        }
};
int main()
{
    Factorial f1(5);
    f1.calculate();
    f1.display();
    Factorial f2(f1);
    f2.calculate();
    f2.display();
    return 0;
}