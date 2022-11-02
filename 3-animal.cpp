// program for function overriding
#include<iostream>
using namespace std;
class animals
{
    public:
        virtual void sound()
        {
            cout<<"Sound() of animal\n";
        }
};
class dog:public animals
{
    public:
        void sound()
        {
            cout<<"Sound() of dog\n";
        }
};
int main()
{
    animals *a,k;
    dog *d,l;
    a=&l;//d=&k;
    a->sound();
    //d->sound();
    return 0;
}