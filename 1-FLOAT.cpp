#include<iostream>
using namespace std;
class FLOAT
{
    private:
        float f;
    public:
        FLOAT() { }
        void setdata(float r)
        {
            f=r;
        }
        void display()
        {
            cout<<f<<endl;
        }
        FLOAT operator+(FLOAT s)
        {
            FLOAT sum;
            sum.f=f+s.f;
            return sum;
        }
        FLOAT operator-(FLOAT j)
        {
            FLOAT sub;
            sub.f=f-j.f;
            return sub;
        }
        FLOAT operator*(FLOAT p)
        {
            FLOAT multi;
            multi.f=f*p.f;
            return multi;
        }
        FLOAT operator/(FLOAT a)
        {
            FLOAT div;
            div.f=f/(float)a.f;
            return div;
        }
};
int main()
{
    FLOAT f1,f2,f3;
    f1.setdata(5);
    f2.setdata(7);
    f3.setdata(9);
    f3=f1+f2;
    f3.display();
    f3=f1-f2;
    f3.display();
    f3=f2*f1;
    f3.display();
    f3=f1/f2;
    f3.display();
    return 0;
}