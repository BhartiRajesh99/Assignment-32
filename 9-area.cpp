#include<iostream>
using namespace std;
class area
{
    private:
        int arrect;
        double arcir,artri;
    public:
        area(double base,double height)
        {
            artri=0.5*base*height;
        }
        area(int length,int breadth)
        {
            arrect=length*breadth;
        }
        area(int radius)
        {
            arcir=3.14*radius*radius;
        }
        void displaytr()
        {
            cout<<"Area of circle="<<artri<<endl;
        }
        void displayrect()
        {
            cout<<"Area of rectangle="<<arrect<<endl;
        }
        void displaycir()
        {
            cout<<"Area of triangle="<<arcir<<endl;
        }
};
int main()
{
    area tr(5.5,6.7),rect(7,3),cir(9);
    tr.displaytr();
    rect.displayrect();
    cir.displaycir();
    return 0;
}