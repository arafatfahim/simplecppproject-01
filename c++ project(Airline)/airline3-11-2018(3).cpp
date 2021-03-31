#include<fstream>
#include <iostream>
#include <string>
#include <iomanip>
//#include "bluesky.h"
using namespace std;
int main ()
{ int choice,x;
    cout<<"\t\t\t\tWELCOME"<<endl
    <<"\t\t\t1.About Qatar Airways\t\t\t"<<endl
    <<"\t\t\t2.Available Country's\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
    <<"\t\t\t3.Booking\t\t\t"<<endl;

    cin>>choice;
    x=choice;
    switch (x)
​
    case 1:
        {

  ifstream myfile ("About2.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }
    }
        break;

    case 2:
        // code to be executed if n is equal to constant2;
        break;
        .
        .
        .
    default:
        // code to be executed if n doesn't match any constant
}
