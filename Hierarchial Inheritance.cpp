#include<iostream>
using namespace std;

class vehicle{
	protected : // ONLY ACCESSED BY CHILD CLASS
		int  noofwheels = 4;
		char engno[10] = "abc123";
};

class car : public vehicle{
	public : // ANYONE CAN ACCESS IT
		char color[10] = "Black";
};

class audi : public vehicle{
	private : // NO ONE CAN ACCESS IT
		char regno[10] = "aab12";
	public : // ANYONE CAN ACCESS IT
		displaydata()
		{
			cout<<"\nThe details are :";
			cout<<"\nNo of wheels : "<<noofwheels;
			cout<<"\nEng No : "<<engno;
			cout<<"\nReg No : "<<regno;
		}
};

// MAIN FUNCTION
main(){
	audi a; // OBJECT 'a' IS CREATED OF CLASS 'AUDI'
	a.displaydata(); // FUNCTION CALL IN 'AUDI' CLASS
	car c; // OBJECT 'c' IS CREATED OF CLASS 'CAR'
	cout<<"\nThe color is "<<c.color;
}