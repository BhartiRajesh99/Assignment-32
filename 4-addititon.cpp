#include<iostream>
using namespace std;
class addition
{
    private:
        double sum;
    public:
        void add(int a,int b,int c=0)
        {
            sum=a+b+c;
        }
        void add(double x,double y,double z=0)
        {
            sum=x+y+z;
        }
        void display()
        {
            cout<<"Sum is "<<sum<<endl;
        }
};
int main()
{
    addition a1,a2;
    a1.add(7,8);
    a1.display();
    a1.add(5,3,4);
    a1.display();
    a2.add(8.9,8.7);
    a2.display();
    a2.add(7.5,6.4,5.98);
    a2.display();
    return 0;
}