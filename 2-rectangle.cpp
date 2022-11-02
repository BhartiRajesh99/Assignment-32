#include<iostream>
using namespace std;
class rectangle
{
    private:
        float ar;
    public:
        void area(int a,int b)
        {
            ar=a*b;
        }
        void area(float x,float y)
        {
            ar=x*y;
        }
        void display()
        {
            cout<<"AREA="<<ar<<endl;
        }
};
int main()
{
    rectangle r;
    r.area(6,7);
    r.display();
    r.area(6.7f,8.9f);
    r.display();
}