#include<iostream>
using namespace std;
#define size 100

class airlines	 //class declaration.
{
public:
	airlines();	// constructor function
	void main_menu();	 //Menu function.
	void make_reservation();	// To make reservation.
	void cancel_reservation();	//To cancel reservation.
	void search_passenger();	//to search a passenger and print info.
	void change_reservation();	//To change reservation.
	void print_list();	 //To print the passenger list.
	void print_report();	 //To print the status report.
	
		
private:
	struct node
	{
		string fname, lname, ID, phone_num, menu;
		int reserve_num, seat_num;
	

		node *next;

	}; //closing struct.
	
	node *start;
		
	node *temp, *temp2;

}bluesky; //closing class.


