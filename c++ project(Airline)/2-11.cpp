#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
  string line;
  { int x;

    string line;
    {
        ifstream myfile ("About.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
    ifstream myfile ("Availablec.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file";
    }


  return 0;
}}
}
