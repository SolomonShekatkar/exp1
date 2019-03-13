#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	double box, sideline, premium, genad;

cout << "Input number of tickets sold for Box" << endl;
cin >>box;
cout << "Input number of tickets sold for Sideline" << endl;
cin >>sideline;
cout << "Input number of tickets sold for Premium" << endl;
cin >>premium;
cout << "Input number of tickets sold for General Admission" << endl;
cin >>genad;
cout <<    "Ticket Price            Ticket Sold       Total Sale Amount" << endl;
cout << "Box: 250" <<"                "<<box <<"                 "<<box * 250 << endl;
cout << "Sideline: 100" <<"           "<<sideline <<"                 "<<sideline * 100<< endl;
cout << "Premium: 50" <<"             "<<premium <<"                 "<<premium * 50 <<endl;
cout << "General Admission 25" <<"    "<<genad <<"                 "<<genad * 25 <<endl; 
 
cout << "Total Sales Amount for all Tickets:" << " "<< box * 250 + sideline * 100 + premium * 50 + genad * 25 << endl;


_getch();
return 0;

}