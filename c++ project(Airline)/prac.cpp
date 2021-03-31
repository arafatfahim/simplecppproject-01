#include<fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{

   int x ,y,u,p;
        cout<<"\t\t===================================\t\t"<<endl;
   	cout<<"\t\t|Airline Management System PROJECT|"<<endl;
	cout<<"\t\t|MADE BY:Arafat Hossain Fahim\t  |"<<endl;
	cout<<"\t\t|Airline: Qatar Airways\t\t  |"<<endl;
	    cout<<"\t\t===================================\t\t"<<endl;
	         cout<<"\t\t\t\t\t\t"<<endl
                 <<"\t\t\t\t\t\t"<<endl
       <<"\t\tWELCOME To QATAR AIRWAYS Ltd."<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t1.About Qatar Airways\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t2.Available Country's\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t3.Booking\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t4.Price List\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t5.Details\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t6.Admin Login\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl

       <<"\t\tThank You For Choosing Qatar AirWays\t\t\t"<<endl;

    cin>>x;
   switch(x)
   {

     case 1 :
         system("CLS");
      {
       string line;
       ifstream myfile ("About.txt");
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
                  system("CLS");
       {
        string line;
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

      case 3 :
                   //system("CLS");
	cout << "\t   WELCOME TO AIRLINE RESERVATION SYSTEM ";
         break;
      case 4 :
                system("CLS");
         cout << "\t\t\t\tPrice List\t\t\t" << endl
              <<"\t\t\t\t\t\t"<<endl
         << "\t\t\t[1]All Price List\t\t\t" << endl
              <<"\t\t\t\t\t\t"<<endl
         << "\t\t\t[2]Discount(regular Passengers)\t\t\t" << endl;
         cin>>y;
         switch(y)
   {

     case 1 :
         system("CLS");
         {
        string line;
        ifstream myfile ("PricelistFall.txt");
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
        case 2 :
            system("CLS");
       cout << "\t Discount(regular Passengers)  ";
        {
        string line;
        ifstream myfile ("PricelistDis.txt");
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
         default :
         cout << "Invalid" << endl;
   }
         case 5 :
                     system("CLS");
             cout     <<"\t\t\t\t\t\t"<<endl
                  <<"\t\t\tDetails" << endl
                      <<"\t\t\t\t\t\t"<<endl
                  <<"\t\t\t[1]Crew Details" << endl
                      <<"\t\t\t\t\t\t"<<endl
                  <<"\t\t\t[2]Passenger Details" << endl
                      <<"\t\t\t\t\t\t"<<endl
                  <<"\t\t\t[3]Flight Status" << endl;
                  break;
         case 6 :
                 system("CLS");
             cout<<"Admin Login"<<endl
                 <<"User Name"<<endl;
             cin>>u;
             cout<<"Password"<<endl;
             cin>>p;
             break;

      default :
         cout << "Invalid" << endl;
   }


   return 0;
}


