#include<iostream>
using namespace std;

class reverse
{
int x,rev=0;
public:

    void getdata(int a)
    {
       x=a;
    }
    void cal()
    {
while(x=0)
        rev=(rev*10)+x%10;
         x=x/10;
    }
    void display()
    {

    cout<<rev;

    }

};

int main()
{
    reverse obj;
    int n;
    cin>>n;
    obj.getdata(n);
    obj.cal();
    obj.display();
    return 0;
}
