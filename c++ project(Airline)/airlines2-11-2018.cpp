#include <conio.h>

#include <cstdio>

#include <iostream>

#include <string.h>

#include <cstdlib>

using namespace std;

static int p = 0;

class a

{

  char Flightn[5], pilot[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void install();

  void allotment();

  void empty();

  void show();

  void avail();

  void position(int i);

}

Flight[10];

void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void a::install()

{

  cout<<"Enter flight no: ";

  cin>>Flight[p].Flightn;

  cout<<"\nEnter Pilot's name: ";

  cin>>Flight[p].pilot;

  cout<<"\nArrival time: ";

  cin>>Flight[p].arrival;

  cout<<"\nDeparture: ";

  cin>>Flight[p].depart;

  cout<<"\nFrom: \t\t\t";

  cin>>Flight[p].from;

  cout<<"\nTo: \t\t\t";

  cin>>Flight[p].to;

  Flight[p].empty();

  p++;

}

void a::allotment()

{

  int seat;

  char number[5];

  top:

  cout<<"Flight no: ";

  cin>>number;

  int n;

  for(n=0;n<=p;n++)

  {

    if(strcmp(Flight[n].Flightn, number)==0)

    break;

  }

  while(n<=p)

  {

    cout<<"\nSeat Number: ";

    cin>>seat;

    if(seat>32)

    {

      cout<<"\nThere are only 32 seats available in this flight.";

    }

    else

    {

    if (strcmp(Flight[n].seat[seat/4][(seat%4)-1], "Empty")==0)

      {

        cout<<"Enter passanger's name: ";

        cin>>Flight[n].seat[seat/4][(seat%4)-1];

        break;

      }

    else

      cout<<"The seat no. is already reserved.\n";

      }

      }

    if(n>p)

    {

      cout<<"Enter correct Flight no.\n";

      goto top;

    }

  }


void a::empty()

{

  for(int i=0; i<8;i++)

  {

    for(int j=0;j<4;j++)

    {

      strcpy(Flight[p].seat[i][j], "Empty");

    }

  }

}

void a::show()

{

  int n;

  char number[5];

  cout<<"Enter Flight no: ";

  cin>>number;

  for(n=0;n<=p;n++)

  {

    if(strcmp(Flight[n].Flightn, number)==0)

    break;

  }

while(n<=p)

{

  vline('*');

  cout<<"Flight no: \t"<<Flight[n].Flightn

  <<"\nPilot: \t"<<Flight[n].pilot<<"\t\tArrival time: \t"

  <<Flight[n].arrival<<"\tDeparture time:"<<Flight[n].depart

  <<"\nFrom: \t\t"<<Flight[n].from<<"\t\tTo: \t\t"<<

  Flight[n].to<<"\n";

  vline('*');

  Flight[0].position(n);

  int a=1;

  for (int i=0; i<8; i++)

  {

    for(int j=0;j<4;j++)

    {

      a++;

      if(strcmp(Flight[n].seat[i][j],"Empty")!=0)

      cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<Flight[n].seat[i][j]<<".";

    }

  }

  break;

  }

  if(n>p)

    cout<<"Enter correct Flight no: ";

}

void a::position(int l)

{

  int s=0;p=0;

  for (int i =0; i<8;i++)

  {

    cout<<"\n";

    for (int j = 0;j<4; j++)

    {

      s++;

      if(strcmp(Flight[l].seat[i][j], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<s<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<Flight[l].seat[i][j];

          p++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<s<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<Flight[l].seat[i][j];

        }

      }

    }

  cout<<"\n\nThere are "<<p<<" seats empty in Flight No: "<<Flight[l].Flightn;

  }

void a::avail()

{


  for(int n=0;n<p;n++)

  {

    vline('*');

    cout<<"Flight no: \t"<<Flight[n].Flightn<<"\nPilot: \t"<<Flight[n].pilot

    <<"\t\tArrival time: \t"<<Flight[n].arrival<<"\tDeparture Time: \t"

    <<Flight[n].depart<<"\nFrom: \t\t"<<Flight[n].from<<"\t\tTo: \t\t\t"

    <<Flight[n].to<<"\n";

    vline('*');

    vline('_');

  }

}

int main()

{

system("cls");

int w;

while(1)

{

    //system("cls");

  cout<<"\n\n\n\n\n";

  cout<<"\t\t\t1.Install\n\t\t\t"

  <<"2.Reservation\n\t\t\t"

  <<"3.Show\n\t\t\t"

  <<"4.Flights Available. \n\t\t\t"

  <<"5.Exit";

  cout<<"\n\t\t\tEnter your choice:-> ";

  cin>>w;

  switch(w)

  {

    case 1:  Flight[p].install();

      break;

    case 2:  Flight[p].allotment();

      break;

    case 3:  Flight[0].show();

      break;

    case 4:  Flight[0].avail();

      break;

    case 5:  exit(0);

  }

}

return 0;

}

