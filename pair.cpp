#include<bits/stdc++.h>
using namespace std;
template<typename t, typename v>
class pair1{
int x,y;
public:
int setx(int x)
{
    this->x=x;
}
int sety(int y)
{
    this->y=y;
}
void getx()
{
    cout<<x<<endl;
}
void gety()
{
    cout<<y<<endl;
}
};

int main()
{
    pair1<pair1<int,int>, int> p1;
    p1.sety(7);
    pair1<int , int> p2;
    p2.setx(8);
    p2.sety(10);
    p1.setx(p2);
    p1.getx();
    p1.gety();



    return 0;
}