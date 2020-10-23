#include<iostream>
using namespace std;

class vehicle{
	protected : // ONLY ACCESSED BY CHILD CLASS
		int  noofwheels = 4;
		char engno[10] = "abc123";
};

class car : public vehicle{
	protected : // ONLY ACCESSED BY CHILD CLASS
		char color[10] = "Black";
};

class audi : public car{
	private : // NO ONE CAN ACCESS IT
		char regno[10] = "aab12";
	public : // ANYONE CAN ACCESS IT
		displaydata()
		{
			cout<<"\nThe details are :";
			cout<<"\nNo of wheels : "<<noofwheels;
			cout<<"\nEng No : "<<engno;
			cout<<"\nColor : "<<color;
			cout<<"\nReg No : "<<regno;
		}
};

// MAIN FUNCTION
main(){
	audi a; // OBJECT 'a' IS CREATED OF CLASS 'AUDI'
	a.displaydata(); // FUNCTION CALL IN 'AUDI' CLASS
}
