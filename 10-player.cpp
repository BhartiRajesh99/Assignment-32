#include<iostream>
#include<Cstring>
using namespace std;
class player
{
    private:
        int player_no,nom,*nog;
        string name;
    public:
        player(int pn,string n,int match,int *goal)
        {
            player_no=pn;
            name.assign(n);
            nom=match;
            nog=new int[match];
            for(int i=0;i<match;i++)
            {
                nog[i]=goal[i];
            }
        }
        void display()
        {
            cout<<"Player Number      : "<<player_no<<endl;
            cout<<"Player Name        : "<<name<<endl;
            cout<<"Number of Matches  : "<<nom<<endl;
            cout<<"Number of Goals    : ";
            for(int i=0;i<nom;i++)
            {
                cout<<nog[i]<<" ";
            }
        }
        ~player()
        {
            delete []nog;
        }
};
int main()
{
    int nm,ng,*gn;
    string name;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter player code:";
    cin>>ng;
    cout<<"Enter no. of matches:";
    cin>>nm;
    cout<<"Enter no. of goals in each match:";
    gn=new int[nm];
    for(int i=0;i<nm;i++)
    {
        cin>>gn[i];
    }
    player p1(ng,"Raj",nm,gn);
    p1.display();
    delete []gn;
    return 0;
}