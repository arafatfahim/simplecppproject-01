#include<fstream>
#include <iostream>
#include <string>
#include <iomanip>
//#include "bluesky.h"
using namespace std;
int main ()
{ char choice;
    cout<<"\t\t\t\tWELCOME"<<endl
    <<"\t\t\t1.About Qatar Airways\t\t\t"<<endl
    <<"\t\t\t2.Available Country's\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
    <<"\t\t\t3.Booking\t\t\t"<<endl;

    cin>>choice;
    string line;

    //if(choice=='1')
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
//  if(choice == '2')
{
    ifstream myfile ("Availablec.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  }
  if(choice == '3')
    {

	system("CLS");	// clean the terminal
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout << "\t     WELCOME TO AIRLINE RESERVATION SYSTEM \n";
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<" ..................... MENU OPTIONS .............................\n"<<endl;




	//menu();	//calling the menu function.
	//seat_fill();	// initialize seat array.




}

  return 0;
}
