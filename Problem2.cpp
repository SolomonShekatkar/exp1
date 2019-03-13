#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	double mass, density;


cout << "Input value of mass in grams" << endl;
cin >>mass;
cout << "Input value of density in grams per cubic centimeters" << endl;
cin >>density; 
cout << "Volume:" <<" "<< mass/density * 0.25 << endl;


_getch();
return 0;
}