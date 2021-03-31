#include<iostream>
using namespace std;
#include<cmath>
class point
{
    int x1,x2,y1,y2,res=0;
    public:
    void getdata(int a1,int b1,int a2,int b2);
    void cal();
    void display();
};
void point::getdata(int a1, int a2,int b1 ,int b2)
{
    a1=x1;
    a2=x2;
    b1=y1;
    b2=y2;
}
void point::cal()
{
    res=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
void point::display()
{
    cout<<res;
}
int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    point obj;
    obj.getdata(x1,x2,y1,y2);
    obj.cal();
    obj.display();
    return 0;
}
